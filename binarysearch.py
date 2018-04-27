# William Daniel Taylor
# 4/27/18
# Binary Search in Python


# create a new list
myList = [0, 19, 28, 35, 36, 37, 49]

# indicies
firstIndex = 0
lastIndex = len(myList) - 1
midIndex = firstIndex + lastIndex / 2

print(str(midIndex))

# element to search for
x = 19

# search; runs O(logn) time
 while (firstIndex <= lastIndex):
	if (x == myList[midIndex]):
		print("Element " + str(x) + " is at position " + str(midIndex))
	elif (x < myList[midIndex]):
		firstIndex = midIndex - 1
		midIndex = firstIndex + lastIndex / 2
	elif (x > myList[midIndex]):
		firstIndex = midIndex + 1
		midIndex = firstIndex + lastIndex / 2
	else:
		print("Element could not be found.")

