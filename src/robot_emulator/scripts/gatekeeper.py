#!/usr/bin/env python

from robot_emulator.msg import *
import rospy
import sys

class Gatekeeper:
	
	def __init__(self):
		reqPub = rospy.Publisher('reqs', Request, queue_size=10)
		rospy.Subscriber('boot', BootResponse, self.buildModel)
		rospy.Subscriber('outputs', Output, self.updateModel)
		rospy.Subscriber('errors', Error, self.checkError)

	def keep(self):
		thisRequest = Request()
		thisRequest.request = 'boot'
		rospy.loginfo("Sending Boot Request")
		reqPub.publish(thisRequest)
		rospy.spin()	

	def buildModel(self,data):
		pass

	def updateModel(self,data):
		pass

	def checkError(self,data):
		pass
		

if __name__ == '__main__':
	rospy.init_node('gatekeeper')
	gatekeeper = Gatekeeper()
	gatekeeper.keep()
	rospy.loginfo("Gatekeeper Node Started")

	
