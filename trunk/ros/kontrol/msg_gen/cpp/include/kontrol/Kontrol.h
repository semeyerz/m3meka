/* Auto-generated by genmsg_cpp for file /home/meka/mekabot/m3meka/ros/kontrol/msg/Kontrol.msg */
#ifndef KONTROL_MESSAGE_KONTROL_H
#define KONTROL_MESSAGE_KONTROL_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace kontrol
{
template <class ContainerAllocator>
struct Kontrol_ {
  typedef Kontrol_<ContainerAllocator> Type;

  Kontrol_()
  : sliders()
  , knobs()
  , buttons()
  {
  }

  Kontrol_(const ContainerAllocator& _alloc)
  : sliders(_alloc)
  , knobs(_alloc)
  , buttons(_alloc)
  {
  }

  typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _sliders_type;
  std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  sliders;

  typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _knobs_type;
  std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  knobs;

  typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _buttons_type;
  std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  buttons;


  typedef boost::shared_ptr< ::kontrol::Kontrol_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kontrol::Kontrol_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct Kontrol
typedef  ::kontrol::Kontrol_<std::allocator<void> > Kontrol;

typedef boost::shared_ptr< ::kontrol::Kontrol> KontrolPtr;
typedef boost::shared_ptr< ::kontrol::Kontrol const> KontrolConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::kontrol::Kontrol_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::kontrol::Kontrol_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace kontrol

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::kontrol::Kontrol_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::kontrol::Kontrol_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::kontrol::Kontrol_<ContainerAllocator> > {
  static const char* value() 
  {
    return "c1e4678c7964f4fee41470b640a6873e";
  }

  static const char* value(const  ::kontrol::Kontrol_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xc1e4678c7964f4feULL;
  static const uint64_t static_value2 = 0xe41470b640a6873eULL;
};

template<class ContainerAllocator>
struct DataType< ::kontrol::Kontrol_<ContainerAllocator> > {
  static const char* value() 
  {
    return "kontrol/Kontrol";
  }

  static const char* value(const  ::kontrol::Kontrol_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::kontrol::Kontrol_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32[] sliders\n\
int32[] knobs\n\
int32[] buttons\n\
\n\
\n\
";
  }

  static const char* value(const  ::kontrol::Kontrol_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::kontrol::Kontrol_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.sliders);
    stream.next(m.knobs);
    stream.next(m.buttons);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct Kontrol_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kontrol::Kontrol_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::kontrol::Kontrol_<ContainerAllocator> & v) 
  {
    s << indent << "sliders[]" << std::endl;
    for (size_t i = 0; i < v.sliders.size(); ++i)
    {
      s << indent << "  sliders[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.sliders[i]);
    }
    s << indent << "knobs[]" << std::endl;
    for (size_t i = 0; i < v.knobs.size(); ++i)
    {
      s << indent << "  knobs[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.knobs[i]);
    }
    s << indent << "buttons[]" << std::endl;
    for (size_t i = 0; i < v.buttons.size(); ++i)
    {
      s << indent << "  buttons[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.buttons[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // KONTROL_MESSAGE_KONTROL_H
