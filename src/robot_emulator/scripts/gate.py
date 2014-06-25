#!/usr/bin/env python

from robot_emulator.msg import *
import rospy
import sys

class Gate:
	
	def __init__(self):
		rospy.Subscriber('reqs', Request, self.parseReq)
		rospy.Subscriber('inputs', Input, self.doInput)
		bootPub = rospy.Publisher('boot', BootResponse, queue_size=10)

	def parseReq(data):
		thisReq = data.request
		rospy.loginfo(data.request)
		if thisReq == 'boot':
			rospy.loginfo(thisReq)
			bootResponder()
	
	def doInput(data):
		#check the name on the input, if it matches this module
		#do the input if possible or publish an error
		pass

	def bootResponder():
		#need a name inside the boot message, so this module will
		#be able to identify messages sent to itself
		bootString = BootResponse()
		bootString.bootresponse = "This is a boot string containing essential info about the module"
		bootPub.publish(bootString)

if __name__ == '__main__':
	rospy.init_node('gate', anonymous=True)
	gate = Gate()
	rospy.loginfo("Gate Node Started")
	rospy.spin()

