dataBase = {
   "paper": {"price": 30, "count": 3},
   "box": {"price": 60, "count": 4},
   "pen": {"price": 10, "count": 40},
   "table": {"price": 100, "count": 1}
}

class User:
   def __init__(self):
      pass

class Admin(User):
   def changePrice(self, product, price):
      if product in dataBase:
         dataBase[product]["price"] = price
      else:
         print("Product not present!")

   def changeCount(self, product, count):
      if product in dataBase:
         dataBase[product]["count"] = count
      else:
         print("Product not present!")

   def addProduct(self, product, price, count):
      if product in dataBase:
         print("Product already present!")
      else:
         dataBase[product] = {"price": price, "count": count}

class Executor(User):
   def __init__(self, budget):
      self.budget = budget
   
   def buyProduct(self, product, count):
      if product in dataBase:
         if dataBase[product]["count"] >= count:
            total_price = dataBase[product]["price"] * count
            if self.budget >= total_price:
               dataBase[product]["count"] -= count
               self.budget -= total_price
               print(f"You bought {count} pcs of {product}")
            else:
               print("You don't have enough funds")
         else:
            print("The product is out of stock!")
      else:
         print("Product not present!")

class Ashot(Admin, Executor):
   pass

if __name__ == "__main__":
   x = Ashot(100) 
   x.buyProduct("paper", 3) 
   print("Remaining budget:", x.budget)
   print("Updated database:", dataBase)

   x.buyProduct("paper", 1)

   x.changeCount("paper", 10)

   x.buyProduct("paper", 1)

   print("Remaining budget:", x.budget)
   print("Updated database:", dataBase)
