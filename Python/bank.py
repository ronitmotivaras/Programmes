class Account:
    def __init__(self,bal,acc):
        self.balance = bal
        self.account_no = acc

    def debit(self,amount):
        self.balance -= amount
        print("Rs",amount,"was debited :")
        print("total balance :",self.get_balace())
    
    def creadit(self,amount):
        self.balance += amount
        print("Rs",amount,"was credited :")
        print("total balance :",self.get_balace())

    def get_balace(self):
        return self.balance

acc1 = Account(10000,123)
acc1.debit(1000)
acc1.creadit(500)
