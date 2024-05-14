class Shape:
    def __init__(self, width, height):
        self.width = width
        self.height = height

class Color:
    def __init__(self, color):
        self.color = color

class Rectangle(Shape, Color):
    def __init__(self, width, height, color):
        Shape.__init__(self, width, height)
        Color.__init__(self, color)

    def display(self):
        print(f"The rectangle Width is : {self.width}, Height: {self.height}, Color: {self.color}")


rect = Rectangle(5, 3, "Orange")

rect.display()
