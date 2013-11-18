/* 
M3 -- Meka Robotics Real-Time Control System
Copyright (c) 2010 Meka Robotics
Author: edsinger@mekabot.com (Aaron Edsinger)

M3 is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

M3 is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License
along with M3.  If not, see <http://www.gnu.org/licenses/>.
*/


//#include "p33fxxxx.h"
#include "setup.h"

void setup_oscillator(void);
void setup_ports(void);
void setup_peripheral_pin_select(void);
void setup_interrupt_priorities(void);


void setup_interrupt_priorities(void)
{
	//Higher number = Higher priority

	//Ethercat Master AL interrupt on INT0

	//Apps inherit Bootloader settings so need set here for Bootloader too.
	//ToDo:FIX!

	_INT0IP=3;	//Ethercat Interrupt
	_INT2IP=2;	//SYNC0 Interrupt



#if defined M3_MAX2 || defined M3_BLD
	//ADC timing not critical
	_AD1IP=3;	//ADC conversion done 
	_T3IP=5;	//Timer3 
#elif defined M3_LEDMDRV_S2R1
	_T3IP=5;	//Timer3 
#else
	_AD1IP=5;	//ADC conversion done 
	_T3IP=4;	//Timer3 
#endif
	
#if defined M3_ELMO_B1R1 || defined M3_ELMO_Z1R1
	_QEIIP=5;	//Encoder index or error
	_AD1IP=3;	//ADC conversion done 
	_T3IP=4;	//Timer3 
#endif

#ifdef USE_ENCODER_MA3
#ifdef M3_DAC_0_1
	_IC1IP=5;	//InputCapture 1 (Abs Encoder)
#else
	_IC1IP=3;	//InputCapture 1 (Abs Encoder)
#if defined M3_HMB_H1R1 || defined M3_GMB_G1R1 || defined M3_HEX2_S1R1 ||defined M3_HB2_H2R1_J0J1 \
	|| defined M3_HB2_H2R1_J2J3J4 ||defined M3_HB2_H2R2_J0J1 || defined M3_HB2_H2R2_J2J3J4  \
	|| defined M3_HB2_H2R3_J0J1 || defined M3_HB2_H2R3_J2J3J4
	_IC2IP=4; //InputCapture 2 (Abs Encoder)
#endif
#endif
#if defined M3_HB2_H2R1_J2J3J4 || defined M3_HB2_H2R2_J2J3J4 || defined M3_HB2_H2R3_J2J3J4
	_IC7IP=4; //InputCapture 7 (Abs Encoder)
#endif
#endif
	
#ifdef USE_BLDC
#ifdef USE_BLDC_INPUT_CAPTURE
	_IC1IP=4; //InputCapture 1 (Hall 1)
	_IC2IP=4; //InputCapture 2 (Hall 2)
	_IC7IP=4; //InputCapture 7 (Hall 3)
#endif
#ifdef USE_BLDC_CHANGE_NOTIFICATION
	_CNIP=4; //Change notification for Hall 1-3
#endif
#endif

}


void setup_oscillator(void)
{
	/*
	Need to Multiply FIN by factor of 3.2
	FIN (INPUT FREQ)	25MHZ	FOR OSCILLATOR FOR ET1200
	N1	25	PLLPRE
	N2	2	PLLPOST
	M	160	PLLDIV
	FOSC=FIN*(M/(N1*N2))	80MHZ
	FCY=FOSC/2	GIVES A 40 MIPS	OUTPUT FREQUENCY
	*/
	CLKDIVbits.PLLPRE=23; //Gives divide by 25
        us_delay(13);
	PLLFBD=158;
        us_delay(13); //Can be 12.5us-1.2=11.3us in theory
	CLKDIVbits.PLLPOST=0;//Gives divide by 2
        us_delay(13);
	// the CPU will automatically switch when all is stable....
	while(OSCCONbits.LOCK!=1) {};  // Wait for PLL to lock
	return;
}

void setup_ports(void)
{

	// Clear All Ports Prior to defining I/O
	PORTA=0;
	PORTB=0;
	PORTC=0;

	/* 
	TRIS<X>=1 MAKES PIN AS INPUT	
	TRIS<X>=0 MAKES PIN AS OUTPUT	
	AFTER RESET, ALL PORT PINS ARE INPUTS			
	PORT<X> READS OR WRITES TO PIN			
	ODC<X>=1 SETS PIN TO OPEN DRAIN OUTPUT			
	OPEN DRAIN WITH 5V PULLUP ALLOWS 5V OUTPUT			
	FOR ADC MUST SET TRIS<X>=1		

	TRISA			
	RA0	INPUT	PIN19	AN0
	RA1	INPUT	PIN20	AN1
	RA2	INPUT	PIN30	OSCI
	RA3	INPUT	PIN31	NC
	RA4	OUTPUT	PIN34	HEARTBEAT LED
	RA7	INPUT	PIN13	NC
	RA8	INPUT	PIN32	EEPROM_LOADED
	RA9	INPUT	PIN35	NC
	RA10 INPUT	PIN12	NC

	TRISB			
	RB0	INPUT	PIN21	AN2
	RB1	INPUT	PIN22	AN3
	RB2	INPUT	PIN23	AN4
	RB3	INPUT	PIN24	AN5
	RB4	INPUT	PIN33	RP4
	RB5	INPUT	PIN41	RP5
	RB6	INPUT	PIN42	RP6
	RB7	INPUT	PIN43	SPI_IRQ
	RB8	INPUT	PIN44	RP8_UART_RX
	RB9	OUTPUT	PIN1	RP9_UART_TX
	RB10	INPUT	PIN8	PGM_PGD
	RB11	INPUT	PIN9	PGM_PGC
	RB12	OUTPUT	PIN10	RP12_PWM
	RB13	OUTPUT	PIN11	RP13_PWM
	RB14	OUTPUT	PIN14	RP14_PWM
	RB15	OUTPUT	PIN15	RP15_PWM

	TRISC			
	RC0	INPUT	PIN25	AN6
	RC1	INPUT	PIN26	AN7
	RC2	INPUT	PIN27	AN8
	RC3	INPUT	PIN36	SYNC_1
	RC4	INPUT	PIN37	SYNC_0
	RC5	INPUT	PIN38	NC
	RC6	OUTPUT	PIN2	SPI_SEL
	RC7	OUTPUT	PIN3	SPI_CLK
	RC8	OUTPUT	PIN4	SPI_DO
	RC9	INPUT	PIN5	SPI_DI
	*/


	// Hardwired pins
	TRISAbits.TRISA4=0;		//RA4	OUTPUT	PIN34	HEARTBEAT LED
	TRISAbits.TRISA8=1;		//RA8	INPUT	PIN32	EEPROM_LOADED
	TRISBbits.TRISB7=1;		//RB7	INPUT	PIN43	SPI_IRQ
	TRISBbits.TRISB10=1;	//RB10	INPUT	PIN8	PGM_PGD
	TRISBbits.TRISB11=1;	//RB10	INPUT	PIN8	PGM_PGD
	TRISCbits.TRISC3=0;		//RC3	OUTPUT	PIN36	LATCH_1
	TRISCbits.TRISC4=1;		//RC4	INPUT	PIN37	SYNC_0
	TRISCbits.TRISC6=0;		//RC6	OUTPUT	PIN2	SPI_SEL
	TRISCbits.TRISC7=0;		//RC7	OUTPUT	PIN3	SPI_CLK
	TRISCbits.TRISC8=0;		//RC8	OUTPUT	PIN4	SPI_DO
	TRISCbits.TRISC9=1;		//RC9	INPUT	PIN5	SPI_DI

		
	/*TRISAbits.TRISA0=1;		//RA0	INPUT	PIN19	AN0
	TRISAbits.TRISA1=1;		//RA1	INPUT	PIN20	AN1
	
	TRISBbits.TRISB0=1;		//RB0	INPUT	PIN21	AN2
	TRISBbits.TRISB1=1;		//RB1	INPUT	PIN22	AN3
	TRISBbits.TRISB2=1;		//RB2	INPUT	PIN23	AN4
	TRISBbits.TRISB3=1;		//RB3	INPUT	PIN24	AN5
	TRISBbits.TRISB4=1;		//RB4	INPUT	PIN33	RP4
	TRISBbits.TRISB5=1;		//RB5	INPUT	PIN41	RP5
	TRISBbits.TRISB6=1;		//RB6	INPUT	PIN42	RP6		
	TRISBbits.TRISB7=1;		//RB7	INPUT	PIN43	SPI_IRQ
	TRISBbits.TRISB8=1;		//RB8	INPUT	PIN44	RP8_UART_RX
	TRISBbits.TRISB9=1;		//RB9	OUTPUT	PIN1	RP9_UART_TX
	TRISBbits.TRISB10=1;	//RB10	INPUT	PIN8	PGM_PGD
	TRISBbits.TRISB11=1;	//RB11	INPUT	PIN9	PGM_PGC
	TRISBbits.TRISB12=1;	//RB12	OUTPUT	PIN10	RP12_PWM
	TRISBbits.TRISB13=1;	//RB13	OUTPUT	PIN11	RP13_PWM
	TRISBbits.TRISB14=1;	//RB14	OUTPUT	PIN14	RP14_PWM
	TRISBbits.TRISB15=1;	//RB15	OUTPUT	PIN15	RP15_PWM

	TRISCbits.TRISC0=1;		//RC0	INPUT	PIN25	AN6
	TRISCbits.TRISC1=1;		//RC1	INPUT	PIN26	AN7
	TRISCbits.TRISC2=1;		//RC2	INPUT	PIN27	AN8*/

#if defined M3_LEDMDRV_S2R1
//Controller for the 16 channels LED Drivers
	TRISCbits.TRISC1=0;		//RC1	OUTPUT	PIN26	RP17_AN7		LED_MDRV_DATA
	TRISCbits.TRISC0=0;		//RC0	OUTPUT	PIN25	RP16_AN6		LED_MDRV_SCLK
	TRISBbits.TRISB3=0;		//RB3	OUTPUT	PIN24	RP3_AN5			LED_MDRV_DCSEL
	TRISBbits.TRISB2=0;		//RB2	OUTPUT	PIN23	RP2_AN4			LED_MDRV_XLAT
	TRISCbits.TRISC2=0;		//RC2	OUTPUT	PIN27	RP18_AN8		LED_MDRV_BLANK
	TRISBbits.TRISB12=0;	//RB12	OUTPUT	PIN10	RP12_PWM1H2		LED_MDRV_GSCLK
	TRISBbits.TRISB6=1;		//RB6	INTPUT	PIN42	RP6				LED_MDRV_READ
	TRISBbits.TRISB5=1;		//RB5	INTPUT	PIN41	RP5				LED_MDRV_XERR

//Decoder outputs for row selection
	TRISBbits.TRISB4=0;		//RB4	OUTPUT	PIN33	RP4				LED_MDRV_A_DEC
	TRISBbits.TRISB8=0;		//RB8	OUTPUT	PIN44	RP8				LED_MDRV_B_DEC
	TRISBbits.TRISB9=0;		//RB9	OUTPUT	PIN1	RP9				LED_MDRV_C_DEC
	TRISBbits.TRISB13=0;	//RB13	OUTPUT	PIN11	RP13			LED_MDRV_EN_DEC

	ODCBbits.ODCB4=1;		//RB4 open-drain for 5V output (pull-up resistor to D5V on the board)
	ODCBbits.ODCB8=1;		//RB8 open-drain for 5V output (pull-up resistor to D5V on the board)
	ODCBbits.ODCB9=1;		//RB9 open-drain for 5V output (pull-up resistor to D5V on the board)
	ODCBbits.ODCB13=1;		//RB13 open-drain for 5V output (pull-up resistor to D5V on the board)
#endif


#if defined M3_DAC_0_1
	TRISAbits.TRISA0=1;		//RA0	INPUT	PIN19	AN0 (NC)
	TRISAbits.TRISA1=1;		//RA1	INPUT	PIN20	AN1 (TEMP)
	TRISBbits.TRISB0=1;		//RB0	INPUT	PIN21	AN2 (EXT)
	TRISBbits.TRISB8=0;		//RB8	OUTPUT	PIN44	RP8 (SPI_SS1/_SEAS)
	TRISBbits.TRISB9=0;		//RB9	OUTPUT	PIN1	RP9 (SPI_CLK_SEAS)
	TRISBbits.TRISB4=0;		//RB4	OUTPUT	PIN33	RP4 (SPI_DI0_SEAS)
	TRISBbits.TRISB5=1;		//RB5	INPUT	PIN41	RP5 (MA3)
	TRISBbits.TRISB6=0;		//RB6	OUTPUT	PIN42	RP6 (AMP_ENABLE)
	TRISBbits.TRISB10=0;	//RB10	OUTPUT	PIN8	PGM_PGD_UART_TX
	TRISBbits.TRISB11=1;	//RB11	INPUT	PIN9	PGM_PGC_UART_RX
	TRISBbits.TRISB13=0;	//RB13	OUTPUT	PIN11	RP13_PWM (SPI_DI_DAC)
	TRISBbits.TRISB14=0;	//RB14	OUTPUT	PIN14	RP14_PWM (SPI_SS0/_DAC)
	TRISBbits.TRISB15=0;	//RB15	OUTPUT	PIN15	RP15_PWM (SPI_CLK_DAC)
#endif

#if defined M3_ELMO_RNA_R0
	TRISAbits.TRISA0=1;		//RA0	INPUT	PIN19	AN0 (SEAS)
	TRISAbits.TRISA1=1;		//RA1	INPUT	PIN20	AN1 (TEMP)
	TRISBbits.TRISB0=1;		//RB0	INPUT	PIN21	AN2 (EXT)
	TRISBbits.TRISB8=0;		//RB8	OUTPUT	PIN44	RP8 (SPI_SS1/_SEAS)
	TRISBbits.TRISB9=0;		//RB9	OUTPUT	PIN1	RP9 (SPI_CLK_SEAS)
	TRISBbits.TRISB4=0;		//RB4	OUTPUT	PIN33	RP4 (SPI_DI0_SEAS)
	TRISBbits.TRISB5=1;		//RB5	INPUT	PIN41	RP5 (MA3)
	TRISBbits.TRISB10=0;	//RB10	OUTPUT	PIN8	PGM_PGD_UART_TX
	TRISBbits.TRISB11=1;	//RB11	INPUT	PIN9	PGM_PGC_UART_RX
    TRISBbits.TRISB12=0;	//RB12	OUTPUT	PIN10	RP12_PWM (AMP_ENABLE)
	TRISBbits.TRISB13=0;	//RB13	OUTPUT	PIN11	RP13_PWM (SPI_DI_DAC)
	TRISBbits.TRISB14=0;	//RB14	OUTPUT	PIN14	RP14_PWM (SPI_SS0/_DAC)
	TRISBbits.TRISB15=0;	//RB15	OUTPUT	PIN15	RP15_PWM (SPI_CLK_DAC)
#endif
#if defined M3_ELMO_B1R1 || defined M3_ELMO_Z1R1
	TRISAbits.TRISA0=1;		//RA0	INPUT	PIN19	AN0 (EXT)
	TRISAbits.TRISA1=1;		//RA1	INPUT	PIN20	AN1 (TEMP)
	TRISBbits.TRISB0=1;		//RB0	INPUT	PIN21	AN2 (NC)


	TRISBbits.TRISB10=0;	//RB10	OUTPUT	PIN8	PGM_PGD_UART_TX
	TRISBbits.TRISB11=1;	//RB11	INPUT	PIN9	PGM_PGC_UART_RX

    TRISBbits.TRISB12=0;	//RB12	OUTPUT	PIN10	RP12_PWM (AMP_ENABLE)
	TRISBbits.TRISB13=0;	//RB13	OUTPUT	PIN11	RP13_PWM (SPI_DI_DAC)
	TRISBbits.TRISB14=0;	//RB14	OUTPUT	PIN14	RP14_PWM (SPI_SS0/_DAC)
	TRISBbits.TRISB15=0;	//RB15	OUTPUT	PIN15	RP15_PWM (SPI_CLK_DAC)

	TRISBbits.TRISB6=1;		//RB6	INPUT	PIN42	SPI_DIO_ENC
	TRISBbits.TRISB3=0;		//RB3	OUTPUT	PIN24	SPI_SS_ENC/
	TRISCbits.TRISC1=0;		//RC1	OUTPUT	PIN26	SPI_CLK_ENC

	TRISBbits.TRISB8=1;		//RB8	INPUT	PIN44	RP8 (QEI X)
	TRISBbits.TRISB9=1;		//RB9	INPUT	PIN1	RP9 (QEI A)
	TRISBbits.TRISB4=1;		//RB4	INPUT	PIN33	RP4 (QEI B)

	TRISCbits.TRISC2=0;		//RC2	OUTPUT	PIN27	BRAKE_ENABLE
	TRISBbits.TRISB5=1;		//RB5	INPUT	PIN41	RP5 (BREAK_BEAM)
#endif

#if defined M3_ELMO_Z1R1
	TRISCbits.TRISC1=1;		//RC1	INPUT	PIN26	ZTB
#endif

#ifdef M3_HMB_H1R1
	TRISAbits.TRISA0=1;		//RA0	INPUT	PIN19	AN0
	TRISAbits.TRISA1=1;		//RA1	INPUT	PIN20	AN1
	TRISBbits.TRISB0=1;		//RB0	INPUT	PIN21	AN2
	TRISBbits.TRISB1=1;		//RB1	INPUT	PIN22	AN3
	TRISBbits.TRISB2=1;		//RB2	INPUT	PIN23	AN4
	TRISBbits.TRISB3=1;		//RB3	INPUT	PIN24	AN5
	TRISCbits.TRISC0=1;		//RC0	INPUT	PIN25	AN6
	TRISCbits.TRISC1=1;		//RC1	INPUT	PIN26	AN7
	TRISCbits.TRISC2=1;		//RC2	INPUT	PIN27	AN8
	TRISBbits.TRISB5=1;		//RB5	INPUT	PIN41	RP5 (MA3)
	TRISBbits.TRISB6=1;		//RB6	INPUT	PIN42	RP6 (MA3)
	TRISBbits.TRISB12=0;	//RB12	OUTPUT	PIN10	RP12_PWM	(Pwm)
	TRISBbits.TRISB13=0;	//RB13	OUTPUT	PIN11	RP13_PWM	(Dir)
	TRISBbits.TRISB14=0;	//RB14	OUTPUT	PIN14	RP14_PWM	(Pwm)
	TRISBbits.TRISB15=0;	//RB15	OUTPUT	PIN15	RP15_PWM	(Dir)
#endif

#if defined M3_HB2_H2R1_J0J1 
	TRISAbits.TRISA0=1;		//RA0	INPUT	PIN19	AN0
	TRISAbits.TRISA1=1;		//RA1	INPUT	PIN20	AN1
	TRISBbits.TRISB0=1;		//RB0	INPUT	PIN21	AN2
	TRISBbits.TRISB1=1;		//RB1	INPUT	PIN22	AN3
	TRISBbits.TRISB2=1;		//RB2	INPUT	PIN23	AN4
	TRISBbits.TRISB3=1;		//RB3	INPUT	PIN24	AN5
	TRISCbits.TRISC0=1;		//RC0	INPUT	PIN25	AN6
	TRISCbits.TRISC1=1;		//RC1	INPUT	PIN26	AN7
	TRISCbits.TRISC2=1;		//RC2	INPUT	PIN27	AN8
	TRISBbits.TRISB4=0;		//RB4	OUTPUT	PIN33	RP4 (AMP_EN1)
	TRISBbits.TRISB5=1;		//RB5	INPUT	PIN41	RP5 (MA3 ENC 1)
	TRISBbits.TRISB6=1;		//RB6	INPUT	PIN42	RP6 (MA3 ENC 0)
	TRISBbits.TRISB9=0;		//RB9	OUTPUT	PIN1	RP9 (AMP_EN0)
	TRISBbits.TRISB12=0;	//RB12	OUTPUT	PIN10	RP12_PWM	(Pwm0)
	TRISBbits.TRISB13=0;	//RB13	OUTPUT	PIN11	RP13_PWM	(Dir0)
	TRISBbits.TRISB14=0;	//RB14	OUTPUT	PIN14	RP14_PWM	(Pwm1)
	TRISBbits.TRISB15=0;	//RB15	OUTPUT	PIN15	RP15_PWM	(Dir1)
#endif

#if defined M3_HB2_H2R2_J0J1  || defined M3_HB2_H2R3_J0J1 
	TRISAbits.TRISA0=1;		//RA0	INPUT	PIN19	AN0
	TRISAbits.TRISA1=1;		//RA1	INPUT	PIN20	AN1
	TRISBbits.TRISB0=1;		//RB0	INPUT	PIN21	AN2
	TRISBbits.TRISB1=1;		//RB1	INPUT	PIN22	AN3
	TRISBbits.TRISB2=1;		//RB2	INPUT	PIN23	AN4
	TRISBbits.TRISB3=1;		//RB3	INPUT	PIN24	AN5
	TRISCbits.TRISC0=1;		//RC0	INPUT	PIN25	AN6 (Not Used)
	TRISCbits.TRISC1=1;		//RC1	INPUT	PIN26	AN7 (Not Used)
	TRISCbits.TRISC2=1;		//RC2	INPUT	PIN27	AN8 (Not Used)
	TRISBbits.TRISB4=1;		//RB4	INPUT	PIN33	RP4 (Not Used)
	TRISBbits.TRISB5=1;		//RB5	INPUT	PIN41	RP5 (MA3 ENC 1)
	TRISBbits.TRISB6=1;		//RB6	INPUT	PIN42	RP6 (MA3 ENC 0)
	TRISBbits.TRISB9=1;		//RB9	Input	PIN1	RP9 (Not Used)
	TRISBbits.TRISB12=0;	//RB12	OUTPUT	PIN10	RP12_PWM	(Pwm0)
	TRISBbits.TRISB13=0;	//RB13	OUTPUT	PIN11	RP13_PWM	(Dir0)
	TRISBbits.TRISB14=0;	//RB14	OUTPUT	PIN14	RP14_PWM	(PwmHJ1)
	TRISBbits.TRISB15=0;	//RB15	OUTPUT	PIN15	RP15_PWM	(PwmLJ1)
#endif

#if defined M3_HB2_H2R1_J2J3J4 
	TRISAbits.TRISA0=1;		//RA0	INPUT	PIN19	AN0
	TRISAbits.TRISA1=1;		//RA1	INPUT	PIN20	AN1
	TRISBbits.TRISB0=1;		//RB0	INPUT	PIN21	AN2
	TRISBbits.TRISB1=1;		//RB1	INPUT	PIN22	AN3
	TRISBbits.TRISB2=1;		//RB2	INPUT	PIN23	AN4
	TRISBbits.TRISB3=1;		//RB3	INPUT	PIN24	AN5
	TRISCbits.TRISC0=1;		//RC0	INPUT	PIN25	AN6
	TRISCbits.TRISC1=1;		//RC1	INPUT	PIN26	AN7
	
	TRISBbits.TRISB4=0;		//RB4	OUTPUT	PIN33	RP4 (AMP_EN2)
	TRISBbits.TRISB9=0;		//RB9	OUTPUT	PIN1	RP9 (AMP_EN3)
	TRISCbits.TRISC2=0;		//RC2	OUTPUT	PIN27	AN8 (AMP_EN4)

	TRISBbits.TRISB5=1;		//RB5	INPUT	PIN41	RP5 (MA3 ENC 2)
	TRISBbits.TRISB6=1;		//RB6	INPUT	PIN42	RP6 (MA3 ENC 3)
	TRISBbits.TRISB8=1;		//RB8	INPUT	PIN44	RP8 (MA3 ENC 4)

	TRISBbits.TRISB10=0;	//RB10	OUTPUT	PIN8	RP10_PWM    (Pwm4)
	TRISBbits.TRISB11=0;	//RB11	OUTPUT	PIN9	RP11_PWM    (Dir4)
	TRISBbits.TRISB12=0;	//RB12	OUTPUT	PIN10	RP12_PWM	(Pwm3)
	TRISBbits.TRISB13=0;	//RB13	OUTPUT	PIN11	RP13_PWM	(Dir3)
	TRISBbits.TRISB14=0;	//RB14	OUTPUT	PIN14	RP14_PWM	(Pwm2)
	TRISBbits.TRISB15=0;	//RB15	OUTPUT	PIN15	RP15_PWM	(Dir2)
#endif

#if defined M3_HB2_H2R2_J2J3J4 || defined M3_HB2_H2R3_J2J3J4
	TRISAbits.TRISA0=1;		//RA0	INPUT	PIN19	AN0
	TRISAbits.TRISA1=1;		//RA1	INPUT	PIN20	AN1
	TRISBbits.TRISB0=1;		//RB0	INPUT	PIN21	AN2
	TRISBbits.TRISB1=1;		//RB1	INPUT	PIN22	AN3
	TRISBbits.TRISB2=1;		//RB2	INPUT	PIN23	AN4
	TRISBbits.TRISB3=1;		//RB3	INPUT	PIN24	AN5
	TRISCbits.TRISC0=1;		//RC0	INPUT	PIN25	AN6
	TRISCbits.TRISC1=1;		//RC1	INPUT	PIN26	AN7
	
	TRISBbits.TRISB4=1;		//RB4	INPUT	PIN33	RP4 (Not Used)
	TRISBbits.TRISB9=1;		//RB9	INPUT	PIN1	RP9 (Not Used)
	TRISCbits.TRISC2=1;		//RC2	INPUT	PIN27	AN8 (Not Used)

	TRISBbits.TRISB5=1;		//RB5	INPUT	PIN41	RP5 (MA3 ENC 2)
	TRISBbits.TRISB6=1;		//RB6	INPUT	PIN42	RP6 (MA3 ENC 3)
	TRISBbits.TRISB8=1;		//RB8	INPUT	PIN44	RP8 (MA3 ENC 4)

	TRISBbits.TRISB10=0;	//RB10	OUTPUT	PIN8	RP10_PWM    (PwmHJ4)
	TRISBbits.TRISB11=0;	//RB11	OUTPUT	PIN9	RP11_PWM    (PwmLJ4)
	TRISBbits.TRISB12=0;	//RB12	OUTPUT	PIN10	RP12_PWM	(PwmHJ3)
	TRISBbits.TRISB13=0;	//RB13	OUTPUT	PIN11	RP13_PWM	(PwmLJ3)
	TRISBbits.TRISB14=0;	//RB14	OUTPUT	PIN14	RP14_PWM	(PwmHJ2)
	TRISBbits.TRISB15=0;	//RB15	OUTPUT	PIN15	RP15_PWM	(PwmLJ2)
#endif


#ifdef M3_HEX2_S1R1
	TRISAbits.TRISA0=1;		//RA0	INPUT	PIN19	AN0
	TRISAbits.TRISA1=1;		//RA1	INPUT	PIN20	AN1
	TRISBbits.TRISB0=1;		//RB0	INPUT	PIN21	AN2
	TRISBbits.TRISB1=1;		//RB1	INPUT	PIN22	AN3
	TRISBbits.TRISB2=1;		//RB2	INPUT	PIN23	AN4
	TRISBbits.TRISB3=1;		//RB3	INPUT	PIN24	AN5
	TRISCbits.TRISC0=1;		//RC0	INPUT	PIN25	AN6
	TRISCbits.TRISC1=1;		//RC1	INPUT	PIN26	AN7
	TRISCbits.TRISC2=1;		//RC2	INPUT	PIN27	AN8
	TRISBbits.TRISB5=1;		//RB5	INPUT	PIN41	RP5 (MA3)
	TRISBbits.TRISB6=1;		//RB6	INPUT	PIN42	RP6 (MA3)
	TRISBbits.TRISB12=0;	//RB12	OUTPUT	PIN10	RP12_PWM	(Pwm)
	TRISBbits.TRISB13=0;	//RB13	OUTPUT	PIN11	RP13_PWM	(Dir)
	TRISBbits.TRISB14=0;	//RB14	OUTPUT	PIN14	RP14_PWM	(Pwm)
	TRISBbits.TRISB15=0;	//RB15	OUTPUT	PIN15	RP15_PWM	(Dir)
#endif

#ifdef M3_GMB_G1R1
	TRISAbits.TRISA0=1;		//RA0	INPUT	PIN19	AN0
	TRISAbits.TRISA1=1;		//RA1	INPUT	PIN20	AN1
	TRISBbits.TRISB0=1;		//RB0	INPUT	PIN21	AN2
	TRISBbits.TRISB1=1;		//RB1	INPUT	PIN22	AN3
	TRISBbits.TRISB2=1;		//RB2	INPUT	PIN23	AN4
	TRISBbits.TRISB3=1;		//RB3	INPUT	PIN24	AN5
	TRISCbits.TRISC0=1;		//RC0	INPUT	PIN25	AN6
	TRISCbits.TRISC1=1;		//RC1	INPUT	PIN26	AN7
	TRISCbits.TRISC2=1;		//RC2	INPUT	PIN27	AN8
	TRISBbits.TRISB5=1;		//RB5	INPUT	PIN41	RP5 (MA3)
	TRISBbits.TRISB6=1;		//RB6	INPUT	PIN42	RP6 (MA3)
	TRISBbits.TRISB12=0;	//RB12	OUTPUT	PIN10	RP12_PWM	(Pwm)
	TRISBbits.TRISB13=0;	//RB13	OUTPUT	PIN11	RP13_PWM	(Dir)
	TRISBbits.TRISB14=0;	//RB14	OUTPUT	PIN14	RP14_PWM	(Pwm)
	TRISBbits.TRISB15=0;	//RB15	OUTPUT	PIN15	RP15_PWM	(Dir)
#ifdef USE_TACTILE_PPS
	TRISBbits.TRISB4=0;		//RB4	OUTPUT	PIN33	RP4 (CLK)
	TRISBbits.TRISB8=1;		//RB8	INPUT	PIN44	RP8 (MISO)
	TRISBbits.TRISB9=0;		//RB9	OUTPUT	PIN1	RP9 (MOSI)
	TRISBbits.TRISB10=0;	//RB10	OUTPUT	PIN8	RP10 (SEL)
	TRISBbits.TRISB11=0;	//RB11	OUTPUT	PIN9	RP11 (SEL)
#endif
	
#endif

#ifdef M3_WMA_0_1
	TRISAbits.TRISA0=1;		//RA0	INPUT	PIN19	AN0
	TRISAbits.TRISA1=1;		//RA1	INPUT	PIN20	AN1
	TRISBbits.TRISB0=1;		//RB0	INPUT	PIN21	AN2
	TRISBbits.TRISB1=1;		//RB1	INPUT	PIN22	AN3
	TRISBbits.TRISB2=1;		//RB2	INPUT	PIN23	AN4
	TRISBbits.TRISB3=1;		//RB3	INPUT	PIN24	AN5
	TRISBbits.TRISB5=1;		//RB5	INPUT	PIN41	RP5			(MA3)
#ifdef USE_BRAKE
	TRISBbits.TRISB11=0;	//RB11	OUTPUT	PIN9	RP11 (Brake DIO)
#endif
	TRISBbits.TRISB12=0;	//RB12	OUTPUT	PIN10	RP12_PWM	(Pwm)
	TRISBbits.TRISB13=0;	//RB13	OUTPUT	PIN11	RP13_PWM	(Pwm)
	TRISBbits.TRISB14=0;	//RB14	OUTPUT	PIN14	RP14_PWM	(Pwm)
	TRISBbits.TRISB15=0;	//RB15	OUTPUT	PIN15	RP15_PWM	(Pwm)
#endif

#if defined M3_MAX2 || defined M3_BMW_A2R1 || defined M3_BMW_A2R2  || defined M3_BMW_A2R3
	TRISAbits.TRISA0=1;		//RA0	INPUT	PIN19	AN0
	TRISAbits.TRISA1=1;		//RA1	INPUT	PIN20	AN1
	TRISBbits.TRISB0=1;		//RB0	INPUT	PIN21	AN2
	TRISBbits.TRISB1=1;		//RB1	INPUT	PIN22	AN3
	TRISBbits.TRISB2=1;		//RB2	INPUT	PIN23	AN4

	TRISBbits.TRISB5=1;		//RB5	INPUT	PIN41	SPI_DIO_SEAS
	TRISCbits.TRISC2=0;		//RC2	OUTPUT	PIN27	SPI_SS_SEAS/
	TRISCbits.TRISC0=0;		//RC0	OUTPUT	PIN25	SPI_CLK_SEAS

	TRISBbits.TRISB6=1;		//RB6	INPUT	PIN42	SPI_DIO_ENC
	TRISBbits.TRISB3=0;		//RB3	OUTPUT	PIN24	SPI_SS_ENC/
	TRISCbits.TRISC1=0;		//RC1	OUTPUT	PIN26	SPI_CLK_ENC

#if defined M3_MAX2_BLDC_T2R2
	TRISCbits.TRISC0=1;		//RC0	INPUT	PIN25	AN6	 //NO SEAS encoder but TMP on AN6
#endif

#if defined M3_MAX2_BLDC_T2R3  || defined M3_MAX2_BDC_T2R3 //SPI ADC
	TRISBbits.TRISB6=1;		//RB6	INPUT	PIN42	SPI_DI_ADC
	ODCBbits.ODCB6=0;		// non open collector
	TRISCbits.TRISC1=0;		//RC1	OUTPUT	PIN26	SPI_CLK_ADC
	TRISBbits.TRISB3=0;		//RB3	OUTPUT	PIN24	SPI_SS_ADC/
#endif

#if defined M3_MAX2_BDC_T2R2 
	TRISCbits.TRISC0=0;		//RC0	OUTPUT	PIN25	//Brake enable
#endif

#if defined M3_MAX2_BDC_T2R3
	TRISBbits.TRISB1=0;		//RB1	OUTPUT	PIN22	//Brake enable
#endif

#if defined M3_MAX2_BDC_ARMH
	TRISBbits.TRISB5=1;		//RB5	INPUT	PIN41	SPI_DIO_SEAS/ZERO/CN27
	TRISCbits.TRISC0=1;		//RC0	INPUT	PIN25	SPI_CLK_SEAS/FWD/CN8
	TRISCbits.TRISC2=1;		//RC2	INPUT	PIN27	SPI_SS_SEAS/REV/CN10
	_CN27PUE=1;				//Enable weak pull-up for switch
	_CN8PUE=1;				//Enable weak pull-up for switch
	_CN10PUE=1;				//Enable weak pull-up for switch
#endif


#if defined M3_MAX2_MA3		
	//Use MA3 encoder on the VertX encoder slot
	TRISBbits.TRISB6=1;		//RB6	INPUT	PIN42	RP6 Encoder input
	TRISBbits.TRISB3=1;		//RB3	INPUT	PIN24	Not used
	TRISCbits.TRISC1=1;		//RC1	INPUT	PIN26	Not used
#endif

#if defined M3_MAX2_BDC_ARMH || defined  M3_MAX2_BDC_ARMH2
	TRISBbits.TRISB6=1;		//RB6	INPUT	PIN42	INDEX/SPI_DIO_ENC
	TRISCbits.TRISC1=1;		//RC1	INPUT	PIN26	A/SPI_CLK_ENC
	TRISBbits.TRISB3=1;		//RB3	INPUT	PIN24	B/SPI_SS_ENC/
#endif

	TRISBbits.TRISB4=1;		//RB4	INPUT	PIN33	RP4/CN1 (HALL1) 
	TRISBbits.TRISB9=1;		//RB9	INPUT	PIN1	RP9/CN21 (HALL2)
	TRISBbits.TRISB8=1;		//RB8	INPUT	PIN44	RP8/CN22 (HALL3)

	TRISBbits.TRISB10=0;	//RB10	OUTPUT	PIN8	RP10_PWM	(Pwm)
	TRISBbits.TRISB11=0;	//RB11	OUTPUT	PIN9	RP11_PWM	(Pwm)
	TRISBbits.TRISB12=0;	//RB12	OUTPUT	PIN10	RP12_PWM	(Pwm)
	TRISBbits.TRISB13=0;	//RB13	OUTPUT	PIN11	RP13_PWM	(Pwm)
	TRISBbits.TRISB14=0;	//RB14	OUTPUT	PIN14	RP14_PWM	(Pwm)
	TRISBbits.TRISB15=0;	//RB15	OUTPUT	PIN15	RP15_PWM	(Pwm)
#endif


#if defined M3_HEX4_S2R1
	TRISAbits.TRISA0=1;		//RA0	INPUT	PIN19	AN0
	TRISAbits.TRISA1=1;		//RA1	INPUT	PIN20	AN1
	TRISBbits.TRISB0=1;		//RB0	INPUT	PIN21	AN2
	TRISBbits.TRISB1=1;		//RB1	INPUT	PIN22	AN3
	TRISBbits.TRISB2=1;		//RB2	INPUT	PIN23	AN4

	TRISBbits.TRISB5=1;		//RB5	INPUT	PIN41	SPI_DIO_ENCA (formerly SEA)
	TRISCbits.TRISC2=0;		//RC2	OUTPUT	PIN27	SPI_SS_ENCA/
	TRISCbits.TRISC0=0;		//RC0	OUTPUT	PIN25	SPI_CLK_ENCA

	TRISBbits.TRISB6=1;		//RB6	INPUT	PIN42	SPI_DIO_ENCB (formerly ENC)
	TRISBbits.TRISB3=0;		//RB3	OUTPUT	PIN24	SPI_SS_ENCB/
	TRISCbits.TRISC1=0;		//RC1	OUTPUT	PIN26	SPI_CLK_ENCB

	TRISBbits.TRISB12=0;	//RB12	OUTPUT	PIN10	RP12_PWM	(Pwm)
	TRISBbits.TRISB13=0;	//RB13	OUTPUT	PIN11	RP13_PWM	(Pwm)
	TRISBbits.TRISB14=0;	//RB14	OUTPUT	PIN14	RP14_PWM	(Pwm)
	TRISBbits.TRISB15=0;	//RB15	OUTPUT	PIN15	RP15_PWM	(Pwm)
#endif

#if defined M3_LEDX2_S1R1 || defined M3_LEDX2XN_S2R1
	TRISBbits.TRISB5=0;		//RB5	OUTPUT	PIN41	RP5				LED_LAT_B
	TRISBbits.TRISB6=0;		//RB6	OUTPUT	PIN42	RP6				LED_EN_A_
	TRISBbits.TRISB8=0;		//RB8	OUTPUT	PIN44	RP8_UART_RX		LED_DIO_B
	TRISBbits.TRISB9=0;		//RB9	OUTPUT	PIN1	RP9_UART_TX		LED_DIO_A
	TRISBbits.TRISB12=0;	//RB12	OUTPUT	PIN10	RP12_PWM		LED_EN_B
	TRISBbits.TRISB13=0;	//RB13	OUTPUT	PIN11	RP13_PWM		LED_CLK_A
	TRISBbits.TRISB14=0;	//RB14	OUTPUT	PIN14	RP14_PWM		LED_CLK_B
	TRISBbits.TRISB15=0;	//RB15	OUTPUT	PIN15	RP15_PWM		LED_LAT_A
#endif

#ifdef M3_BMA_A1R1
	TRISAbits.TRISA0=1;		//RA0	INPUT	PIN19	AN0
	TRISAbits.TRISA1=1;		//RA1	INPUT	PIN20	AN1
	TRISBbits.TRISB0=1;		//RB0	INPUT	PIN21	AN2
	TRISBbits.TRISB1=1;		//RB1	INPUT	PIN22	AN3
	TRISBbits.TRISB2=1;		//RB2	INPUT	PIN23	AN4
	TRISBbits.TRISB3=1;		//RB3	INPUT	PIN24	AN5
	TRISBbits.TRISB5=1;		//RB5	INPUT	PIN41	RP5			(MA3)
	TRISBbits.TRISB12=0;	//RB12	OUTPUT	PIN10	RP12_PWM	(Dir)
	TRISBbits.TRISB13=0;	//RB13	OUTPUT	PIN11	RP13_PWM	(Pwm)
#endif

#if defined M3_PWR_0_2 || defined M3_PWR_0_3 || defined M3_PWR_0_4 || defined M3_PWR_0_5		
	TRISAbits.TRISA0=1;		//RA0	INPUT	PIN19	AN0
	TRISAbits.TRISA1=1;		//RA1	INPUT	PIN20	AN1
#if defined USE_ADC_SPI
	TRISBbits.TRISB0=0;		//RB0	OUTPUT	PIN21	AN2 (SPI_SS_ADC/)
	TRISBbits.TRISB15=0;	//RB15	OUTPUT	PIN15	RP15 (SPI_CLK_ADC)
	TRISBbits.TRISB14=1;	//RB15	INTPUT	PIN14	RP14 (SPI_DI_ADC)
#endif
#if defined USE_BUZZER
	TRISBbits.TRISB11=0;	//RB11	OUTPUT	PIN9	PGM_PGC_BUZZER
#endif
	TRISBbits.TRISB5=1;		//RB5	INPUT	PIN41	RP5  (mode_remote)
	TRISBbits.TRISB6=1;		//RB6	INPUT	PIN42	RP6	 (motor_enabled)
	TRISBbits.TRISB12=0;	//RB12	OUTPUT	PIN10	RP12_PWM (enable_motor)

//testing current sensing with UART before including in Ethercat loop ****
#if defined USE_UART	
	TRISBbits.TRISB10=0;	//RB10	OUTPUT	PIN8	PGM_PGD_UART_TX
	TRISBbits.TRISB11=1;	//RB11	INPUT	PIN9	PGM_PGC_UART_RX
#endif
//testing current sensing with UART before including in Ethercat loop ****
	
#if defined M3_PWR_0_3 || defined M3_PWR_0_4 || defined M3_PWR_0_5
	TRISBbits.TRISB13=0;	//RB13	OUTPUT	PIN11	RP13_PWM (status led)
#endif
	ODCBbits.ODCB12=1;		//enable_motor: set to open-collector for 5V I/O
	
#endif

#if defined M3_LOADX6_A2R1 || defined M3_LOADX6_A2R2 || defined M3_LOADX6_A2R3	
	TRISAbits.TRISA0=1;		//RA0	INPUT	PIN19	AN0
	TRISAbits.TRISA1=1;		//RA1	INPUT	PIN20	AN1
	TRISBbits.TRISB0=1;		//RB0	INPUT	PIN21	AN2
	TRISBbits.TRISB1=1;		//RB1	INPUT	PIN22	AN3
	TRISBbits.TRISB2=1;		//RB2	INPUT	PIN23	AN4
	TRISBbits.TRISB3=1;		//RB3	INPUT	PIN24	AN5
	TRISCbits.TRISC0=1;		//RC0	INPUT	PIN25	AN6
	TRISCbits.TRISC1=1;		//RC1	INPUT	PIN26	AN7
	TRISCbits.TRISC2=1;		//RC2	INPUT	PIN27	AN8
	TRISBbits.TRISB5=1;		//RB5	INPUT	PIN41	(dig_ext_0)
#endif

#if defined M3_FB_DEV_0_0
	TRISBbits.TRISB9=0;		//RB9	OUTPUT	PIN1	UART_TX
	TRISBbits.TRISB8=1;		//RB8	INPUT	PIN44	UART_RX
#endif


#ifdef M3_DEV
	/* 
	M3_DEV is initialized with the functions assigned for Jumpers ON,
	TRIS<X> needs to be modified before using the functions assigned for Jumpers OFF
	*/

	/*
	TRISA			
	RA0	INPUT	PIN19	AN0
	RA1	INPUT	PIN20	AN1
	*/
	TRISAbits.TRISA0=1;	
	TRISAbits.TRISA1=1;

	/*
	TRISB
	RB0		INPUT	PIN21	AN2
	RB1		INPUT	PIN22	AN3
	RB2		INPUT	PIN23	AN4
	RB3		INPUT	PIN24	AN5
	RB4		OUTPUT	PIN33	SPI_SS/
	RB5		INPUT	PIN41	ENC0
	RB6		INPUT	PIN42	ENC1
	RB8		OUTPUT	PIN44	SPI_MUX_CS0
	RB9		OUTPUT	PIN1	SPI_MUX_CS1
	RB10	OUTPUT	PIN8	UART_TX
	RB11	INPUT	PIN9	UART_RX
	RB12	INPUT	PIN10	DIG0	
	RB13	INPUT	PIN11	SPI_DI (MISO)
	RB14	OUTPUT	PIN14	SPI_DO (MOSI)
	RB15	OUTPUT	PIN15	SPI_CLK
	*/
	TRISBbits.TRISB0=1;
	TRISBbits.TRISB1=1;
	TRISBbits.TRISB2=1;
	TRISBbits.TRISB3=1;
	TRISBbits.TRISB4=0;
	TRISBbits.TRISB5=1;
	TRISBbits.TRISB6=1;
	TRISBbits.TRISB8=0;
	TRISBbits.TRISB9=0;
	TRISBbits.TRISB10=0;
	TRISBbits.TRISB11=1;
	TRISBbits.TRISB12=1;
#ifdef USE_DAC
	TRISBbits.TRISB13=0;  //V0.0 MOSI is wired to here for DAC
#else
	TRISBbits.TRISB13=1;
#endif
	TRISBbits.TRISB14=0;
	TRISBbits.TRISB15=0;

	/*
	TRISC
	RC0	INPUT	PIN25	AN6
	RC1	INPUT	PIN26	AN7
	RC2 INPUT	PIN27	BB
	*/
	TRISCbits.TRISC0=1;
	TRISCbits.TRISC1=1;
	TRISCbits.TRISC2=1;

	//TRISBbits.TRISB8=1;			//UART TX
	//TRISBbits.TRISB9=0;			//UART RX
#endif


	return;
}

//Note: If using bootloader, only the first call (Bootloader) works
//Second call by app doesn't work. So for now, bootloader peripheral config.
//must support all devices.
//TODO: leave PPS unlocked after one call. 

void setup_peripheral_pin_select(void)
{
	//Unlock ala datasheet #OSCONL 
	asm volatile (	"mov #0x742, w1 \n"
					"mov #0x46, w2 \n"
					"mov #0x57, w3 \n"
					"mov.b w2, [w1] \n"
					"mov.b w3, [w1] \n"
					"bclr 0x742, #0x6");

	//RPINRX AND RPORX ARE SET TO 0X0000 AFTER RESET
	//THEREFORE ALL INPUTS INITIALLY TIED TO RP0
	//WHICH IS AN2  IN THIS DESIGN.
	//THIS SEEMS OK...
	//RP21 IS NC SO THIS ALL UNUSED PERIPHERAL INPUTS
	//SHOULD BE DISABLED AND MAPPED TO THIS PIN
	//ALL UNUSED OUTPUTS GET MAPPED TO VSS
	
#ifdef USE_ETHERCAT
	////// Inputs  /////
	//RPINR0bits.INT1R=19;	//(SYNC1) INT1 ON RP19 :					RPINR0
	RPINR1bits.INT2R=20;	//(SYNC0) INT2 ON RP20 :					RPINR1	
	RPINR20bits.SDI1R=25;	//SPI DATA IN ON RP25 :						RPINR20	
	////// Outputs /////
	RPOR11bits.RP22R = 0b01001;  //SPI SLAVE SELECT OUT ON RP22 :			RPOR11
	RPOR11bits.RP23R = 0b01000; //SPI CLOCK OUT ON RP23 :					RPOR11	
	RPOR12bits.RP24R = 0b00111; //SPI DATA OUT ON RP24  :					RPOR12	

#endif
#ifdef USE_ENCODER_QEI
#if defined M3_ELMO_B1R1 || defined M3_ELMO_Z1R1
	RPINR14bits.QEA1R=9;		//ENCODER_A ON RP9 :						RPINR14	
	RPINR14bits.QEB1R=4;		//ENCODER_B ON RP4 :						RPINR14	
	RPINR15bits.INDX1R=8;		//ENCODER_I ON RP8 :						RPINR15	
#endif
#if defined M3_MAX2_BDC_ARMH || defined  M3_MAX2_BDC_ARMH2
	RPINR14bits.QEA1R=17;		//ENCODER_A ON RP17 :						RPINR14	
	RPINR14bits.QEB1R=3;		//ENCODER_B ON RP3 :						RPINR14	
	RPINR15bits.INDX1R=6;		//ENCODER_I ON RP6 :						RPINR15	
#endif
#endif

#ifdef USE_ENCODER_MA3

#if defined M3_BMA_A1R1 || defined M3_WMA_0_1 || defined M3_DAC_0_1 || defined M3_HMB_H1R1  || defined M3_GMB_G1R1 || defined M3_HEX2_S1R1 || defined M3_ELMO_RNA_R0
	RPINR7bits.IC1R=5;		//InputCapture 1 ON RP5 :					RPINR7
#endif
#if defined M3_MAX2_MA3
	RPINR7bits.IC1R=6;		//InputCapture 1 ON RP6					RPINR7
#endif
#if defined M3_HMB_H1R1 || defined M3_GMB_G1R1 || defined M3_HEX2_S1R1
	RPINR7bits.IC2R=6;		//InputCapture 2 ON RP6 :					RPINR7
#endif

#if defined M3_HB2_H2R1_J0J1  || defined M3_HB2_H2R2_J0J1 || defined M3_HB2_H2R3_J0J1 
	RPINR7bits.IC1R=6;		//InputCapture 1 ON RP6					RPINR7
	RPINR7bits.IC2R=5;		//InputCapture 2 ON RP5					RPINR7
#endif
#if defined M3_HB2_H2R1_J2J3J4 || defined M3_HB2_H2R2_J2J3J4 || defined M3_HB2_H2R3_J2J3J4
	RPINR7bits.IC1R=5;		//InputCapture 1 ON RP5 :					RPINR7
	RPINR7bits.IC2R=6;		//InputCapture 2 ON RP6 :					RPINR7
	RPINR10bits.IC7R=8;		//InputCapture 3 ON RP8 :					RPINR10
#endif
#endif
 
#ifdef USE_BLDC
#if defined M3_MAX2 && defined USE_BLDC_INPUT_CAPTURE
	RPINR7bits.IC1R=4;		//InputCapture 1 ON RP4 :	RPINR7	(HALL1) 
	RPINR7bits.IC2R=9;		//InputCapture 2 ON RP9 :	RPINR7	(HALL2) 
	RPINR10bits.IC7R=8;		//InputCapture 7 ON RP8 :	RPINR10	(HALL3) 
#endif
#endif

#ifdef USE_UART
#ifdef M3_DEV
	RPINR18bits.U1RXR=11;			//U1RX ON RP11 :			RPINR18	
	RPOR5bits.RP10R = 0b00011;		//U1TX ON RP10 :			RPOR5	
#endif
#if defined M3_DAC_0_1
	RPINR18bits.U1RXR=11;			//U1RX ON RP11 :			RPINR18	
	RPOR5bits.RP10R = 0b00011;		//U1TX ON RP10 :			RPOR5	
#endif
#if defined M3_PWR_0_5 //testing current sensing before including in the ethercat loop
	RPINR18bits.U1RXR=11;			//U1RX ON RP11 :			RPINR18	
	RPOR5bits.RP10R = 0b00011;		//U1TX ON RP10 :			RPOR5	
#endif
#if defined M3_FB_DEV_0_0
	RPINR18bits.U1RXR=8;			//U1RX ON RP8 :				RPINR18	
	RPOR4bits.RP9R = 0b00011;		//U1TX ON RP9 :				RPOR4	
#endif
#endif

/*
#ifdef M3_DEV
	/// ******************** SPI PIN SELECT ******************* /
	////// Input /////
	RPINR20bits.SDI1R=13;	//SPI DATA IN ON RP13 :						RPINR20	
	////// Outputs /////
	RPOR2bits.RP4R = 0b01001;  //SPI SLAVE SELECT OUT ON RP4 :				RPOR2
	RPOR7bits.RP15R = 0b01000; //SPI CLOCK OUT ON RP15 :					RPOR7	
	RPOR7bits.RP14R = 0b00111; //SPI DATA OUT ON RP14  :					RPOR7
	/ ******************** UART PIN SELECT ***************** /
	RPINR18bits.U1RXR=11;	//U1RX ON RP11 :								RPINR18	
	RPOR5bits.RP10R = 0b00011; //U1TX ON RP10 :								RPOR5	
#endif
*/



	//Lock ala datasheet
	asm volatile (	"mov #0x742, w1 \n"
				"mov #0x46, w2 \n"
				"mov #0x57, w3 \n"
				"mov.b w2, [w1] \n"
				"mov.b w3, [w1] \n"
				"bset 0x742, #0x6");
	return;
}

#ifndef M3_BLD
void us_delay(int n) {
  int i,j;
  for (i=0;i<n;i++) {
    for(j=0;j<US_DELAY_CONST;j++) ;
  }
}
void ms_delay(int n) {
  int i,j;
  for (i=0;i<n;i++) {
    for(j=0;j<MS_DELAY_CONST;j++) ;
  }
}

void us100_delay(int n) {
  int i,j;
  for (i=0;i<n;i++) {
    for(j=0;j<US100_DELAY_CONST;j++) ;
  }
}
#endif