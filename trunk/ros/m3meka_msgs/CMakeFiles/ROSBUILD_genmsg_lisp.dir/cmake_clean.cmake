FILE(REMOVE_RECURSE
  "msg_gen"
  "srv_gen"
  "msg_gen"
  "srv_gen"
  "src/m3meka_msgs/msg"
  "src/m3meka_msgs/srv"
  "CMakeFiles/ROSBUILD_genmsg_lisp"
  "msg_gen/lisp/M3OmnibaseJoy.lisp"
  "msg_gen/lisp/_package.lisp"
  "msg_gen/lisp/_package_M3OmnibaseJoy.lisp"
  "msg_gen/lisp/M3JointStatus.lisp"
  "msg_gen/lisp/_package.lisp"
  "msg_gen/lisp/_package_M3JointStatus.lisp"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_lisp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
