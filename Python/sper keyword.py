class Car:
    def __init__(self, type):
        self.type = type

    @staticmethod
    def start():
        print("Started..")
    
    @staticmethod
    def stop():
        print("Stopped")

class Toyota(Car):
    def __init__(self,name,type):
        super().__init__(type)
        self.name = name
        super().start()

car1 = Toyota("parius","electric")
print(car1.type)