// ch16_p7_testscore_class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;
class TestScores
{
private:
	double Avrg;
	vector<double> Arr;
	int Vector_Size;
	void set_vector_size();
	void fill_vector();
	void set_avrg();
public:
	TestScores();
	double get_avrg() { return Avrg; }
	void print_arr_content();
};
TestScores::TestScores() {
	set_vector_size();
	fill_vector();
	set_avrg();

}
void TestScores::set_avrg() {
	double total = 0;
	for (double index : Arr)
	{
		total += index;
	}
	// Done to cut the average down to just 2 decimal place of precision. cuts 6.66667 down to 6.66
	Avrg = floorf((total / Vector_Size) * 100) / 100;
}

void TestScores::set_vector_size()
{
	string input = " ";
	bool tryAgain = true;
	int size = 0;
	while (tryAgain)
	{
		cout << "How many values to total: ";
		getline(cin, input);
		try
		{
			size = stoi(input);
			if (size >= 1) {
				tryAgain = false;
			}
			else
			{
				cout << "Input must be atleast 1.\n";
			}
		}
		catch (const std::invalid_argument& error)
		{
			cout << "Error! Please try again.\n";
		}
	}
	Vector_Size = size;
}

//******************************************************************
void TestScores::fill_vector()
{
	bool tryAgain = true;
	double value = 0.0;
	string input = " ";

	for (int index = 0; index < Vector_Size; index++)
	{
		tryAgain = true;
		while (tryAgain)
		{
			cout << "Enter Test #" << index + 1 << " Score: ";
			getline(cin, input);
			try
			{
				value = stod(input);
				if (value <= 0 || value > 100)
				{
					cout << "Error! Value must be between 1 - 100.\n";
				}
				else
				{
					Arr.push_back(value);
					tryAgain = false;
				}
			}
			catch (const std::invalid_argument& error)
			{
				cout << "Error! Invalid value entered. Please try again.\n";
			}
		}
	}

}

void TestScores::print_arr_content()
{
	cout << "There are " << Vector_Size << " Elements in the array. contents are:\n";
	for (double index : Arr)
	{
		cout << index << ",";
	}
}

int main()
{

	TestScores test;
	cout << test.get_avrg() << endl; //retrieve and outputs the Avrg from the array values.
	test.print_arr_content();


}

