#WAP to enter a number and check whether it is a palindrome or not.
def is_palindrome(number):
    original = number
    reversed = 0
    while number > 0:
        digit = number % 10
        reversed = reversed * 10 + digit
        number //= 10
    return original == reversed

number = int(input("Enter a number: "))
if is_palindrome(number):
    print("The number is a palindrome.")
else:
    print("The number is not a palindrome.")
#2nd method
# def is_palindrome(num):
#     return str(num) == str(num)[::-1]

# number = int(input("Enter a number: "))
# if is_palindrome(number):
#     print("Palindrome")
# else:
#     print("Not a palindrome")