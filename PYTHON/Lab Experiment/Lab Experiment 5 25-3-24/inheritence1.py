#4.WAP for all types of inheritances
# Single inheritance
class Parent:
    def show(self):
        print("Parent method")

class Child(Parent):
    def display(self):
        print("Child method")

# Multiple inheritance
class A:
    def method_a(self):
        print("Method A")

class B:
    def method_b(self):
        print("Method B")

class C(A, B):
    def method_c(self):
        print("Method C")

# Multilevel inheritance
class Grandparent:
    def method1(self):
        print("Grandparent method")

class Parent(Grandparent):
    def method2(self):
        print("Parent method")

class Child(Parent):
    def method3(self):
        print("Child method")

# Hierarchical inheritance
class Animal:
    def sound(self):
        print("Animal Sound")

class Dog(Animal):
    def bark(self):
        print("Dog Barking")

class Cat(Animal):
    def meow(self):
        print("Cat Meowing")

# Example usage
child = Child()
child.method1()
child.method2()
child.method3()

c_object = C()
c_object.method_a()
c_object.method_b()
c_object.method_c()

dog = Dog()
dog.sound()
dog.bark()

cat = Cat()
cat.sound()
cat.meow()