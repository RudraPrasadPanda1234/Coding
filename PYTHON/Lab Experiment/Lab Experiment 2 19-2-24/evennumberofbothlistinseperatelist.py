#4.wap to create 2 list and print the even  numbers of both list in a seperate list
list1 = [1, 2, 3, 4, 5]
list2 = [6, 7, 8, 9, 10]
evenlist = [i for i in list1 + list2 if i % 2 == 0]
print(evenlist)
