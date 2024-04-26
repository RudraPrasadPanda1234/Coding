#2.WAP to override the area calculation of three shapes (square,rectangle,triangle)
import math

class Shape:
    def area(self):
        pass

class Square(Shape):
    def __init__(self, side):
        self.side = side

    def area(self):
        return self.side * self.side

class Rectangle(Shape):
    def __init__(self, length, width):
        self.length = length
        self.width = width

    def area(self):
        return self.length * self.width

class Triangle(Shape):
    def __init__(self, base, height):
        self.base = base
        self.height = height

    def area(self):
        return 0.5 * self.base * self.height

# Example usage
square = Square(5)
rectangle = Rectangle(4, 6)
triangle = Triangle(3, 8)

print("Area of Square:", square.area())
print("Area of Rectangle:", rectangle.area())
print("Area of Triangle:", triangle.area())