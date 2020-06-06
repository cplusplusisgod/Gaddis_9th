// ch17_p8_prime_number_generation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPrime(int);
void print(int);
	

int main()
{
	vector<int> numbers;
	int num;
	cout << "Enter number to get all the prime numbers less than it: ";
	cin >> num;
	for (int count = 2; count < num; count++)
	{
		numbers.push_back(count);
	}

	for_each(numbers.begin(), numbers.end(), print);
}



bool isPrime(int n)
{
	if (n <= 1)
		return false;
	for (int count = 2; count < n; count++) {
		if (n % 2 == 0)
			return false;
	}
		return true;
}

void print(int n)
{
	if (isPrime(n))
		cout << n << endl;
	
}