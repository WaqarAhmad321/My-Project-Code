class Students:  # class name is written in pascal case convention i.e: HelloBro
    section = "SICSB-1"  # class attribute/variable/property/class instance

    # self is used because the object instance is passed every time when it is called by it
    # method name is written in camel case convention i.e: helloBro
    def marks(self, total_marks, name):
        self.name = name
        self.total_marks = total_marks
        print(f"The total marks of Mr.{self.name} are {self.total_marks}")
    # __init__ is always automatically executed at first of the class

    def __init__(self):
        print(f"*****Welcometo Basics******")

    @staticmethod  # it is used when self is not required, to prevent positional arguement error
    def greet():
        print(f"Congratulations!You are passed.")


student1 = Students()
student1.name = "Waqar Ahmad"  # object instance
student1.roll_no = 169
# if object instance(1st priority) is not present then it will be taken from class(2nd priority)
print(student1.section)
student1.total_marks = 427
if student1.total_marks >= 400:
    student1.greet()
student1.marks(427, student1.name)  # it is actually Students.marks(student1)
