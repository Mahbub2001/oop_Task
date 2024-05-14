class Student:
    def __init__(self, name, age):
        self._name = name
        self._age = age

    def set_name(self, name):
        self._name = name

    def get_name(self):
        return self._name

    def set_age(self, age):
        self._age = age

    def get_age(self):
        return self._age


student = Student("Mahbub", 20)


print("Before : ")
print("Name:", student.get_name(), ", Age:", student.get_age())
student.set_name("Ahmed")
student.set_age(22)
print("After : ")
print("Name:", student.get_name(), ", Age:", student.get_age())
