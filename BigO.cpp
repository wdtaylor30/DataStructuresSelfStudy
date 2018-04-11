/* 4/4/18
lesson on Big O notation 
corresponds with BigO Notes */

#include <iostream>
using namespace std;
int* testArray;
int arraySize;

//For-loop; runs O(n) time 
void displayArray()
{
	cout << endl;
	
	for (int i = 0; i < arraySize; i++)
	{
		cout << "Element " << i + 1 << ": " << testArray[i] << endl;
	}//end for
}//end function

//inserts a given value as the first element; runs O(1) time
void insert(int value)
{
	testArray[0] = value;
}

//main
int main() 
{
	//user input for array size
	cout << "Enter array size: " << endl;
	cin >> arraySize;
	
	testArray = new int[arraySize];
	
	//user input for first element and insert() function
	int j;
	cout << "Enter the first number: " << endl;
	cin >> j;
	insert(j);
	
	//fills array with numbers after first element; runs O(n) time
	for (int k = 0; k <= arraySize; k++)
	{
		testArray[k] = j;
		j++;
	}//end for
	
	
	//display array
	displayArray();

	//delete[] testArray;
}//end function
