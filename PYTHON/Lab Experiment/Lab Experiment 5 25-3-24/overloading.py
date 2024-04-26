#3.WAP to overload the addition method with diff no of arguments
class Addition:
    def add(self,*args):
        result = 0
        for num in args:
            result += num
        return result

# Example usage
addition = Addition()
print("Sum of 2 and 3:", addition.add(2, 3))
print("Sum of 2, 3, and 4:", addition.add(2, 3, 4))
print("Sum of 1, 2, 3, 4, and 5:", addition.add(1, 2, 3, 4, 5))