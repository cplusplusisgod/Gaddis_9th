// ch17_p1_unique_words.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <sstream>
using namespace std;
int main()
{
	fstream read_file("unique_words.txt", ios::in);

	map<string, int> words;
	string word_input;
	string line_input;

	while (getline(read_file, line_input))
	{
		stringstream ss(line_input);
		while (ss >> word_input)
		{
			if (!words.count(word_input))
			{
				words.emplace(word_input, 1);
			}
			else
			{
				words[word_input]++;
			}

		}
	}
	//code to delete words that appear more than once. Decided it be nicer to keep all the words and track their number of occurances.
	/*for (auto it = words.begin(); it != words.end();)
	{
		if (it->second > 1)
		{
			it = words.erase(it);
		}
		else
		{
			it++;
		}

	}*/
	cout << "\tUnique words\n";
	for (auto iter = words.begin(); iter != words.end(); iter++)
	{
		if(iter->second == 1)
		cout << iter->first << " ";
	}

	cout << "\n\tNon unique words\n";
	for (auto iter = words.begin(); iter != words.end(); iter++)
	{
		if(iter->second > 1)
		cout <<'"'<<iter->first <<'"'<< " Appears [" << iter->second << "] Times!\n";
	}

}

