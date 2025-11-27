class A:
    varA = "Wel come to class A"

class B:
    varB = "Wel come to class B"

class C(A,B):
    varC = "Wel come to class C"

C1 = C()
print(C1.varA)
print(C1.varB)
print(C1.varC)