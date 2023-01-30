from math import sqrt


class Calculator:
    def __init__(self):
        print("******Welcome to Calculator******")

    def square(self, number):
        self.number = number
        print(f"The square of {self.number} is {self.number **2}")

    def sqrt(self, number):
        self.number = number
        print(f"The square root of {self.number} is {sqrt(self.number)}")

    def cube(self, number):
        self.number = number
        print(f"The square root of {self.number} is {self.number ** 3}")


num = Calculator()
num.number = int(input("Enter a number :\n"))
num.square(3)
num.sqrt(3)
num.cube(3)
