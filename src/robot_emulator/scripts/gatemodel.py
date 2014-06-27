class GateKeeperModel:
	def __init__(self):
		self.gates = []
		self.id = 0
	def addgate(self,gate):
		#check for older models at this Gate Number
		replaced = False		
		for g in self.gates:
			if g.number == gate.number:
				#replace the older model
				g.settype(gate.mtype)
				replaced = True
		if not replaced:
			self.gates.append(gate)
	
	def __str__(self):
		tempstring = 'Gates: '
		for gate in self.gates:
			tempstring = tempstring + 'Gate ' + str(gate.number) + ' ' + gate.mtype + ', '
		return tempstring

class Module:
	def __init__(self,mtype='None', number=1):
		self.mtype = mtype
		self.number = number

	def settype(self,mtype):
		self.mtype = mtype

	def setnum(self,number):
		self.number = number
