#4. WAP to create a set and copy the content of the set to a new set.
original_set = eval(input("Enter a set"))#{1, "apple", 3.14}
# Method 1: Using the set() constructor
copied_set_1 = set(original_set)
# Method 2: Using the copy() method
copied_set_2 = original_set.copy()
# Print the original and copied sets
print("Original set:", original_set)
print("Copied set 1 (using set() constructor):", copied_set_1)
print("Copied set 2 (using copy() method):", copied_set_2)