/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /home/ed/Dropbox/GitHub/simpleRos/src/robot_emulator/msg/BootResponse.msg
 *
 */


#ifndef ROBOT_EMULATOR_MESSAGE_BOOTRESPONSE_H
#define ROBOT_EMULATOR_MESSAGE_BOOTRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robot_emulator
{
template <class ContainerAllocator>
struct BootResponse_
{
  typedef BootResponse_<ContainerAllocator> Type;

  BootResponse_()
    : modulenumber(0)
    , moduletype()  {
    }
  BootResponse_(const ContainerAllocator& _alloc)
    : modulenumber(0)
    , moduletype(_alloc)  {
    }



   typedef int64_t _modulenumber_type;
  _modulenumber_type modulenumber;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _moduletype_type;
  _moduletype_type moduletype;




  typedef boost::shared_ptr< ::robot_emulator::BootResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_emulator::BootResponse_<ContainerAllocator> const> ConstPtr;

}; // struct BootResponse_

typedef ::robot_emulator::BootResponse_<std::allocator<void> > BootResponse;

typedef boost::shared_ptr< ::robot_emulator::BootResponse > BootResponsePtr;
typedef boost::shared_ptr< ::robot_emulator::BootResponse const> BootResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_emulator::BootResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_emulator::BootResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace robot_emulator

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'robot_emulator': ['/home/ed/Dropbox/GitHub/simpleRos/src/robot_emulator/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::robot_emulator::BootResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_emulator::BootResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_emulator::BootResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_emulator::BootResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_emulator::BootResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_emulator::BootResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_emulator::BootResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7ed1ea0cf1ef59caf9b63d3b9f5a8f15";
  }

  static const char* value(const ::robot_emulator::BootResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7ed1ea0cf1ef59caULL;
  static const uint64_t static_value2 = 0xf9b63d3b9f5a8f15ULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_emulator::BootResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_emulator/BootResponse";
  }

  static const char* value(const ::robot_emulator::BootResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_emulator::BootResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 modulenumber\n\
string moduletype\n\
";
  }

  static const char* value(const ::robot_emulator::BootResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_emulator::BootResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.modulenumber);
      stream.next(m.moduletype);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct BootResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_emulator::BootResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_emulator::BootResponse_<ContainerAllocator>& v)
  {
    s << indent << "modulenumber: ";
    Printer<int64_t>::stream(s, indent + "  ", v.modulenumber);
    s << indent << "moduletype: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.moduletype);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_EMULATOR_MESSAGE_BOOTRESPONSE_H
