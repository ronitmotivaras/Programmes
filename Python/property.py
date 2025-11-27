class Student:
    def __init__(self,phy,chem,math):
        self.phy=phy
        self.chem=chem
        self.math=math
        # self.percentage = (phy+chem+math)/3

    @property
    def percentage(self):
        return (self.phy+self.chem+self.math)/3

stud1 = Student(98,99,100)
print(stud1.percentage)

stud1.phy=86
print(stud1.percentage)