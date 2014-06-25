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
				g.settype(gate.gtype)
				replaced = True
		if not replaced:
			print 'still doing it'
			self.gates.append(gate)
	
	def __str__(self):
		tempstring = 'Gates: '
		for gate in self.gates:
			tempstring = tempstring + 'Gate ' + str(gate.number) + ' ' + gate.gtype + ', '
		return tempstring

class GateModel:
	def __init__(self,gtype='None', number=1):
		self.gtype = gtype
		self.number = number

	def settype(self,gtype):
		self.gtype = gtype

	def setnum(self,number):
		self.number = number
