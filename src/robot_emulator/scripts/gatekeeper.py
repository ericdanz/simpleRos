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

	'''def keep(self):
		reqPub = rospy.Publisher('reqs', Request, queue_size=10, latch=True)
		thisRequest = Request()
		thisRequest.request = 'boot'
		rospy.loginfo("Sending Boot Request")
		reqPub.publish(thisRequest)	
	'''
	def buildModel(self,data):
		rospy.loginfo(data.gatetype)
		#make sure gatetype conforms to known types before creating a gate model
		if data.gatetype == 'locomotion':	
			gmodel = GateModel(data.gatetype)		
			self.gkmodel.addgate(gmodel)
		print self.gkmodel.gates
		

	def updateModel(self,data):
		pass

	def checkError(self,data):
		pass


if __name__ == '__main__':
	rospy.init_node('gatekeeper')
	gatekeeper = Gatekeeper()
	#gatekeeper.keep()
	rospy.loginfo("Gatekeeper Node Started")
	rospy.spin()
	
