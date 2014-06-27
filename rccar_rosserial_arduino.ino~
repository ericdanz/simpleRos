#include <ros.h>
#include <AFMotor.h>
#include <geometry_msgs/Twist.h>
#include <std_msgs/String.h>
#include <robot_emulator/Request.h>
#include <robot_emulator/BootResponse.h>

ros::NodeHandle nh;

robot_emulator::BootResponse boot_msg;
ros::Publisher boot("boot", &boot_msg);

char bootchar[23] = "this is a boot message";


void runMotors( const geometry_msgs::Twist& input_msg){
   

}

void requests( const robot_emulator::Request& req_msg){
if(req_msg.request == "boot"){
   boot_msg.moduletype = bootchar;
   boot_msg.modulenumber = 1;
   boot.publish( &boot_msg );
}

}

ros::Subscriber<geometry_msgs::Twist> in_sub("inputs", &runMotors );
ros::Subscriber<robot_emulator::Request> req_sub("reqs", &requests );


void setup()
{

  nh.initNode();
  nh.advertise(boot);
  nh.subscribe(in_sub);
  nh.subscribe(req_sub);

}

void loop()
{
  
  nh.spinOnce();
  delay(100);
}
