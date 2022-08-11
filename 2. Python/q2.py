# 02. Write a Python program to append a new item to the end of the array.


from array import *
arr = array('i', [1, 3, 5, 7, 9])
print("Original array: "+str(arr))
print("Appending 12 at the end of the array:")
arr.append(12)
print("New array: "+str(arr))
