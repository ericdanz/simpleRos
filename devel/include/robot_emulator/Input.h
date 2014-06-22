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
 * Auto-generated by gensrv_cpp from file /home/ed/Dropbox/GitHub/simpleRos/src/robot_emulator/srv/Input.srv
 *
 */


#ifndef ROBOT_EMULATOR_MESSAGE_INPUT_H
#define ROBOT_EMULATOR_MESSAGE_INPUT_H

#include <ros/service_traits.h>


#include <robot_emulator/InputRequest.h>
#include <robot_emulator/InputResponse.h>


namespace robot_emulator
{

struct Input
{

typedef InputRequest Request;
typedef InputResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Input
} // namespace robot_emulator


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::robot_emulator::Input > {
  static const char* value()
  {
    return "ed6c783a61d9498b03b5f270a53c657b";
  }

  static const char* value(const ::robot_emulator::Input&) { return value(); }
};

template<>
struct DataType< ::robot_emulator::Input > {
  static const char* value()
  {
    return "robot_emulator/Input";
  }

  static const char* value(const ::robot_emulator::Input&) { return value(); }
};


// service_traits::MD5Sum< ::robot_emulator::InputRequest> should match 
// service_traits::MD5Sum< ::robot_emulator::Input > 
template<>
struct MD5Sum< ::robot_emulator::InputRequest>
{
  static const char* value()
  {
    return MD5Sum< ::robot_emulator::Input >::value();
  }
  static const char* value(const ::robot_emulator::InputRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::robot_emulator::InputRequest> should match 
// service_traits::DataType< ::robot_emulator::Input > 
template<>
struct DataType< ::robot_emulator::InputRequest>
{
  static const char* value()
  {
    return DataType< ::robot_emulator::Input >::value();
  }
  static const char* value(const ::robot_emulator::InputRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::robot_emulator::InputResponse> should match 
// service_traits::MD5Sum< ::robot_emulator::Input > 
template<>
struct MD5Sum< ::robot_emulator::InputResponse>
{
  static const char* value()
  {
    return MD5Sum< ::robot_emulator::Input >::value();
  }
  static const char* value(const ::robot_emulator::InputResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::robot_emulator::InputResponse> should match 
// service_traits::DataType< ::robot_emulator::Input > 
template<>
struct DataType< ::robot_emulator::InputResponse>
{
  static const char* value()
  {
    return DataType< ::robot_emulator::Input >::value();
  }
  static const char* value(const ::robot_emulator::InputResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROBOT_EMULATOR_MESSAGE_INPUT_H