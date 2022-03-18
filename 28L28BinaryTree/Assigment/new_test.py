class Test:

    def __init__(self, max_profit= 54000):
        print("testing")
        self.max_profit = max_profit
        self.phone = self.get_phone()

    def profit(self):
        return self.max_profit

    def get_phone(self):
        self.phone = 4353453456345
        return self.phone
  
    def printDisplay(self):
        print("Number", self.phone)

o = Test(23234234)
print(o.profit())
print(o.printDisplay())