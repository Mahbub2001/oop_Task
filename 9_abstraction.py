from abc import ABC, abstractmethod

class Shape(ABC):
    @abstractmethod
    def draw(self):
        pass

    def display_info(self):
        print("This is a shape.")

class Circle(Shape):
    def draw(self):
        print("This is a circle.")

class Rectangle(Shape):
    def draw(self):
        print("This is a rectangle.")

def main():
    circle = Circle()
    rectangle = Rectangle()

    shapes = [circle, rectangle]

    for s1 in shapes:
        s1.draw()

    for s1 in shapes:
        s1.display_info()

if __name__ == "__main__":
    main()
