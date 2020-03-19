// ch9_p9_MedianFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <memory>
void sort(int*, int);
void medium( int*, int);
using namespace std;
int main()
{
	//int* arr = nullptr;
	int SIZE; //get used defined size for new arrau.

	cout << "How many numbers do you want to enter?: ";
	cin >>SIZE;
	int* arr = new int[SIZE];  //doing it all on one line.

	for (int A = 0; A < SIZE; A++) {
		cin >> arr[A];
	}
	
	sort(arr, SIZE);
	medium(arr, SIZE);
	
	delete[] arr;
	arr = nullptr;
}


void sort(int* arr, int size)
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


void medium(int* arr, int size)
{
	int temp;
	int temp2;
	  //if its even
	for (int x = 0; x < size; x++)
	{
		cout << arr[x] << " ";
	}
	if (size % 2 == 0)
	{
		cout<<"\n" << arr[(size / 2)] + arr[(size / 2) - 1];
	}
	else
	{
		cout<<"\n" << arr[size / 2];
	}

}