// ch9_p8_mode_function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void mode_func(int[], int);
void bubble_sort(int[], int);
int main()
{
	const int SIZE = 12;
	int arr[SIZE] = { 1,2,3,4,5,6,7,8,9,10,11,12};
	bubble_sort(arr, SIZE);


	mode_func(arr, SIZE);



}

void bubble_sort(int arr[], int size)
{
	int maxElement;
	int index;

	for (maxElement = size - 1; maxElement > 0; maxElement--)
	{
		for (index = 0; index < maxElement; index++)
		{
			if (arr[index] > arr[index + 1])
			{
				swap(arr[index], arr[index + 1]);
			}
		}
	}
}


void mode_func(int arr[], int size)
{
	int tracker = 0;
	int base = 1;
	int numb = 0;


	for (int A = 0; A < size; A++)
	{
		for (int B = 0; B < size; B++)
		{
			if (arr[A] == arr[B])
				tracker += 1;
		}
		if (tracker > base)
		{
			base = tracker;
			numb = arr[A];
		}
		tracker = 0;

	}
	cout << "test1 " << base << " test2 " << numb;
}