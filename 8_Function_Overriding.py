class Shape:
    def draw(self):
        print("This is a generic shape")

class Circle(Shape):
    def draw(self):
        print("This is a circle")

class Square(Shape):
    def draw(self):
        print("This is a square")

def main():
    shape1 = Circle()
    shape2 = Square()

    shape1.draw()
    shape2.draw()

if __name__ == "__main__":
    main()
