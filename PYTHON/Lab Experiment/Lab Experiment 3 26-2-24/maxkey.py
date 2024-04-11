#2.WAP to create a dictionary and print the key which is the maximum value.
d1=eval(input("Enter the dict:"))
max_value=max(list(d1.keys()))
# for i in d1:
#     if max_value==i:
#         print(i)
print(max_value)