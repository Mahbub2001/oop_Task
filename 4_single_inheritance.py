class Shape:
    def __init__(self, width, height):
        self.width = width
        self.height = height

    def area(self):
        print("Area of Shape")
        return 0

class Rectangle(Shape):
    def __init__(self, width, height):
        super().__init__(width, height)

    def area(self):
        print("Area of Rectangle is")
        return self.width * self.height

def main():
    rect = Rectangle(5, 3)

    print("The area is :", rect.area())

if __name__ == "__main__":
    main()
