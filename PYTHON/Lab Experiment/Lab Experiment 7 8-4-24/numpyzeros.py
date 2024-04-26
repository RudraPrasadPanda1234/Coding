#2.Creating the multidimensional array for zeros,ones, and reshape
import numpy as np
arr=np.zeros((2,3))
print(arr)
ar=np.ones((3,4))
print(ar)
arr1=np.array([1,2,3,4,5,6,7,8,9,10,11,12])
arr2=arr1.reshape(4,3)
print(arr2)