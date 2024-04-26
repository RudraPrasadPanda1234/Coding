#2. WAP to create a dictionary and print the key's value which is the maximum value.
#my_dict = {'apple': 10, 'banana': 20, 'cherry': 5}
#max_key = max(my_dict, key=my_dict.get)

#if max_key:
 # print("The key with the maximum value is:", max_key)
#else:
  #print("The dictionary is empty.")

def maxvalue(d):
    maxkey=max(d,key=d.get)
    return maxkey

d1=eval(input("Enter a dictionary"))
max_key=maxvalue(d1)

if max_key:
 print("The key with the maximum value is:", max_key)
else:
  print("The dictionary is empty.")