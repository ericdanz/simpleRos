class GateKeeperModel:
	def __init__(self):
		self.gates = []
		self.id = 0
	def addgate(self,gate):
		self.gates.append(gate)

class GateModel:
	def __init__(self,gtype='Null')
		self.gtype = gtype
	def settype(self,gtype):
		self.gtype = gtype
