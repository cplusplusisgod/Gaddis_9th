// ch9_p2_test_scores.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void order(int[], int);
void average(int[], int);

int main()
{
	int user_input; 0;
	int* arr = nullptr;


	cout << "Enter size\n";
	do {
		cin >> user_input;
	} while (user_input <= 0);
	arr = new int[user_input]; //dynamicaly allocate array with user input size;

	for (int count = 0; count < user_input; count++)
	{
		cout << "Test score for # " << (count + 1) << "/" << user_input << endl;
		cin >> arr[count];
	}
	for (int count = 0; count < user_input; count++)
		cout << arr[count] << " ";

	cout << "\n";
	order(arr,user_input);
	for (int count = 0; count < user_input; count++)
		cout << arr[count] << " ";

	average(arr, user_input);
	delete[] arr;

}

//uses bubble sort
void order(int arr[], int size)
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

void average(int arr[], int size)
{
	int total = 0;
	int count = 0;

	for (count; count < size; count++)
		total += arr[count];

	cout << "The total was " << total << " The size was " << size << " Making the average approx " << total / size;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
