my_dict = {'apple': 10, 'banana': 20, 'cherry': 5}
max_key = max(my_dict, key=my_dict.get)

if max_key:
 print("The key with the maximum value is:", max_key)
else:
  print("The dictionary is empty.")