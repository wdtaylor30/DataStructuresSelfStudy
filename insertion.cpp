#if 0
William Daniel Taylor
5.1.18
Insertion sort in C++
#endif

#include <iostream>
using namespace std;

void insertionSort (int arr[], int length)
{
	//secondary incrementer
	int j;

	//placeholder variable
	int temp;

	//sort logic itself; runs O(n^2) worst case
	for (int i = 0; i < length; i++)
	{
		j = i;

		// while j is past the first element AND the current element
		// AND the current element is smaller than the previous element
		while ((j > 0) && (arr[j] < arr[j - 1]))
		{
			//temporarily hold current element
			temp = arr[j];

			//swap current with previous
			arr[j] = arr[j-1];

			//swap previous with what once was the current
			arr[j - 1] = temp;

			//DECREMENT j
			j--;
		}//end while
	}//end for

	//print sorted array
	cout << "Sorted array: ";
	for (int k = 0; k  < length; k++)
	{
		cout << arr[k] << " ";
	}//end for
	cout << endl;
}//end method


int main()
{
	int myArr[6] = {7, 2, 24, 19, 8, 5};
	int myArrLength = (sizeof(myArr) / sizeof(*myArr)) - 1;

	//print unsorted array
	cout << "Unsorted array: ";
	for (int a = 0; a < myArrLength; a++)
	{
		cout << myArr[a] << " ";
	}//end for
	cout << endl;	

	//sort
	insertionSort(myArr, myArrLength);
}//end main
