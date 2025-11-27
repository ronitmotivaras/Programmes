class Account:
    def __init__(self,acc_no,acc_pass):
        self.acc_no = acc_no
        self.__acc_pass = acc_pass
    
    def reset_pass(self):
        print(self.__acc_pass)

    def __hello(self):
        print("Hello")
    
    def welcome(self):
        self.__hello()

a1 = Account(123,"Abc")

print(a1.acc_no)
a1.reset_pass()
a1.welcome()