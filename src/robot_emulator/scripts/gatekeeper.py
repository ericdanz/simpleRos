#!/usr/bin/env python

from robot_emulator.msg import *
from gatemodel import *
import rospy
import sys

class Gatekeeper:

	def __init__(self):
		self.gkmodel = GateKeeperModel()
		rospy.Subscriber('boot', BootResponse, self.buildModel)
		rospy.Subscriber('outputs', Output, self.updateModel)
		rospy.Subscriber('errors', Error, self.checkError)

		reqPub = rospy.Publisher('reqs', Request, queue_size=10, latch=True)
		thisRequest = Request()
		thisRequest.request = 'boot'
		rospy.loginfo("Sending Boot Request")
		reqPub.publish(thisRequest)

	def buildModel(self,data):
		rospy.loginfo(data.gatetype)
		#make sure gatetype conforms to known types before creating a gate model
		if data.gatetype == 'locomotion' or data.gatetype == 'sensor':	
			gmodel = GateModel(data.gatetype,data.gatenumber)		
			self.gkmodel.addgate(gmodel)
		print self.gkmodel

	def updateModel(self,data):
		pass

	def checkError(self,data):
		pass

	def sendReq(self,message):
		#this will take a message from the rest of the system, sort and translate 
		#it and send it off to the gates		
		pass


if __name__ == '__main__':
	rospy.init_node('gatekeeper')
	gatekeeper = Gatekeeper()
	rospy.loginfo("Gatekeeper Node Started")
	rospy.spin()
	
