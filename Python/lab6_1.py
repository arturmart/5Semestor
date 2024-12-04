
class Shape:
   def __init__(self):
      print("Shape Constructor("+hex(id(self))+")")
      

class s2D(Shape):
   def __init__(self):
      print("2D Constructor("+hex(id(self))+")")
   def area(self):
      pass

class square(s2D):
   def __init__(self,side):
      self.side = side
      print("square Constructor("+hex(id(self))+")")
   def area(self):
      return (self.side*self.side)
   
class triangle(s2D):
   def __init__(self,bttm,h):
      self.bttm = bttm
      self.h = h
      print("triangle Constructor("+hex(id(self))+")")
   def area(self):
      return (self.bttm*self.h/2)


class s3D(Shape):
   def __init__(self):
      print("3D Constructor("+hex(id(self))+")")
   def volume(self):
      return 100
   
class cube(s3D):
   def __init__(self,side):
      self.side = side
      print("cube Constructor("+hex(id(self))+")")
   def volume(self):
      return (self.side ** 3)
   
class cone(s3D):
   def __init__(self,r,h):
      self.r = r
      self.h = h
      print("cone Constructor("+hex(id(self))+")")
   def volume(self):
      return (self.r ** 2/3*3.14*self.h)
   


my_cube = cube(10)
print(my_cube.volume()) 

my_cube = cube(10)
print(my_cube.volume()) 

