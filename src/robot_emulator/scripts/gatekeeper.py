#!/usr/bin/env python

from robot_emulator.msg import *
import rospy
import sys

def buildModel(data):
	pass

def updateModel(data):
	pass

def checkError(data):
	pass




def init():
	#init with a boot request from all listening modules
	rospy.init_node('gatekeeper')
	reqPub = rospy.Publisher('reqs', Request, queue_size=10)
	thisRequest = Request()
	thisRequest.request = 'boot'
	rospy.loginfo(thisRequest)
	reqPub.publish(thisRequest)

def theSubscriber():
	#suscribe to all the topics individually
	#then call something to respond to any activity
	r = rospy.Rate(10)
	#listen to the three topics coming from the modules
	rospy.Subscriber('boot', BootResponse, buildModel)
	rospy.Subscriber('outputs', Output, updateModel)
	rospy.Subscriber('errors', Error, checkError)
	rospy.spin()



if __name__ == '__main__':
	init()
	theSubscriber()
	
