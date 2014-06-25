class GateKeeperModel:
	def __init__(self):
		self.gates = []
		self.id = 0
	def addgate(self,gate):
		self.gates.append(gate)
	
	def __str__(self):
		tempstring = 'Gates: '
		for gate in self.gates:
			tempstring =tempstring + gate.gtype + ','
		return tempstring

class GateModel:
	def __init__(self,gtype='None'):
		self.gtype = gtype
	def settype(self,gtype):
		self.gtype = gtype
