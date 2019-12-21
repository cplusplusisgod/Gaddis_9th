// ch9_p3_drop_lowest_score.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;
void order(int[], int);
void average(int[], int);

int main()
{
	int user_input;
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
	order(arr, user_input);
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
	double total = 0.0;
	int count = 3;
	int choice;
	double avrg;

	cout << fixed << showpoint << setprecision(2);
	cout << "Drop lowest for average? 1 for yes 2 for no\n";
	do {
		cin >> choice;
	} while (choice <= 0);

	if (choice == 2) {
		for (count = 0; count < size; count++)
			total += arr[count];
		cout << "The total was " << total << " The size was " << size << " Making the average approx " << total / size;
	}

	if (choice == 1) {
		for (count = 1; count < size; count++) //already sorted so lowest is arr[0], new loop total skips ifrst element (lowest)
			total += arr[count];

		size -= 1; //reduce size by 1 before diving total as we droped 1 element 
		avrg = total / size;
		cout << "The total was " << total << "The size was " << size + 1 << " lowest was " << arr[0] << " the size is " << size << endl
			<< " average is " << avrg;
	}



}


