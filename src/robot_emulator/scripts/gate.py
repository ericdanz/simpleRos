#!/usr/bin/env python

from robot_emulator.msg import *
import rospy
import sys


def doInput(data):
	#check the name on the input, if it matches this module
	#do the input if possible or publish an error
	pass

def bootResponder():
	rospy.loginfo('inside boot responder')
	bootPub = rospy.Publisher('boot', BootResponse, queue_size=10)
	#need a name inside the boot message, so this module will
	#be able to identify messages sent to itself
	bootString = Boot()
	bootString.bootresponse = "This is a boot string containing essential info about the module"
	rospy.loginfo(bootString)
	bootPub.publish(bootString)

def parseReq(data):
	rospy.loginfo('inside parse req')
	thisReq = data.request
	
	rospy.loginfo(data.request)
	if thisReq == 'boot':
		rospy.loginfo(thisReq)
		bootResponder()
	
	#bootResponder()	
	#further request types can be added	
	#elif thisReq == ''


def subscriber():
	#suscribe to all the topics individually
	#then call something to respond to any activity
	#r = rospy.Rate(10)
	#listen to the two topics coming from the robot brain
	rospy.init_node('gate', anonymous=True)
	rospy.Subscriber('reqs', Request, parseReq)
	rospy.Subscriber('inputs', Input, doInput)
	rospy.loginfo('this is Subscriber')
	rospy.spin()


if __name__ == '__main__':
	subscriber()

