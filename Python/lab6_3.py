import math

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def lcm(a, b):
    return abs(a * b) // gcd(a, b)

class Kotorak:
	def __init__(self, hamarich, haytarar):
		self.__hamarich = hamarich
		self.__haytarar = haytarar

	def resolve(self):
		_gcd = gcd(self.__hamarich, self.__haytarar)
		self.__hamarich = self.__hamarich // _gcd
		self.__haytarar = self.__haytarar // _gcd

	def __add__(self, other):
		_lcm = lcm(self.__haytarar, other.__haytarar)
		op1 = _lcm // self.__haytarar
		op2 = _lcm // other.__haytarar
		nor_hamarich1 = op1 * self.__hamarich
		nor_hamarich2 = op2 * other.__hamarich

		res = Kotorak(nor_hamarich1 + nor_hamarich2, _lcm)
		# avelacnel krchatum
		return res

	def __sub__(self, other):
		_lcm = lcm(self.__haytarar, other.__haytarar)
		op1 = _lcm // self.__haytarar
		op2 = _lcm // other.__haytarar
		nor_hamarich1 = op1 * self.__hamarich
		nor_hamarich2 = op2 * other.__hamarich
  
		res = Kotorak(nor_hamarich1 - nor_hamarich2, _lcm)
		# avelacnel krchatum
		return res

	def __mul__(self, other):
		res = Kotorak(self.__hamarich * other.__hamarich, self.__haytarar * other.__haytarar)
		# avelacnel krchatum
		return res

	def __truediv__(self, other):
		res = Kotorak(self.__hamarich * other.__haytarar, self.__haytarar * other.__hamarich)
		# avelacnel krchatum
		return res

	def __floordiv__(self, other):
		return self.__truediv__(self, other)
  

	def print(self):
		print(f"{self.__hamarich} / {self.__haytarar}")

op1 = Kotorak(10, 20)
op2 = Kotorak(10, 30)
ob = op1 + op2
ob.resolve()
ob.print()
