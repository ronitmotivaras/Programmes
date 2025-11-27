class Car:
    @staticmethod
    def start():
        print("Started..")
    
    @staticmethod
    def stop():
        print("Stopped")

class Toyota(Car):
    def __init__(self,brand):
        self.brand = brand

class Fortuner(Toyota):
    def __init__(self, type):
        self.type = type

car1 = Fortuner("diesel")

car1.start()
car1.stop()
