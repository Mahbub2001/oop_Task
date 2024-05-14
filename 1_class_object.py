class Rectangle:
    def __init__(self, length, width):
        self.length = length
        self.width = width

    def area(self):
        return self.length * self.width

    def __str__(self):
        return f"Rectangle object created !! length: {self.length}; width: {self.width}"

    def perimeter(self):
        return 2 * (self.length + self.width)

    def __del__(self):
        print("Rectangle object destroyed")

def main():
    rectangle = Rectangle(5.0, 3.0)
    print("Area is:", rectangle.area())
    print("Perimeter is:", rectangle.perimeter())

if __name__ == "__main__":
    main()
