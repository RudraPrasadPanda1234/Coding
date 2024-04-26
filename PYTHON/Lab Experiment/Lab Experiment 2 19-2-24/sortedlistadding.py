#5.wap to take a list of 10 elements now divide the list into two half and 1st half in the asccending order and the 2nd order is decending order
mylist = [4, 2, 7, 1, 9, 5, 3, 8, 6, 10]
firsthalf = sorted(mylist[:len(mylist)//2])
print("The firsthalflist after sorting is=",firsthalf)
secondhalf = sorted(mylist[len(mylist)//2:], reverse=True)
print("The firsthalflist after sorting is=",secondhalf)
print(firsthalf + secondhalf)