// ch17_p3_capital_quiz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
#include <ctime>
#include <random>
using namespace std;

void makeMaps(vector<string>&, vector<string>&, map<string, string>&);
void getRandNums(int&);
void askQuestions(map<string, string>&, vector<string>&, vector<string>&, const vector<string>&, const int);

int main()
{
	//no need for more advance seeding.
	srand(time(0));

	vector<string> States = { "Alabama","Alaska","Arizona","Arkansas","California","Colorado","Connecticut","Delaware","Florida","Georgia",
						 "Hawaii","Idaho","Illinois","Indiana","Iowa","Kansas","Kentucky","Lousiana","Maine","Maryland","Massachusetts",
						 "Michigan","Minnesota","Mississippi","Missouri","Montana","Nebraska","Nevada","New Hampshire","New Jersey",
						 "New Mexico","New York","North Carolina","North Dakota","Ohio","Oklahoma","Oregon","Pennsylvania","Rhode Island",
						 "South Carolina","South Dakota","Tennessee","Texas","Utah","Vermont","Virginia","Washington","west virgina","Wisconsin","Wyoming" };

	vector<string> Capitals = { "Montgomery","Juneau","Phoenix","Little Rock","Sacramento","Denver","Hartford","Dover","Tallahassee","Atlanta",
						   "Honolulu","Boise","Springfield","Indianapolis","Des Moines","Topeka","Frankfort","Baton Rouge","Augusta","Annapolis",
						   "Boston","Lansing","Saint Paul","Jackson","Jefferson City","Helena","Lincoln","Carson City","Concord","Trenton","Santa Fe",
						   "Albany","Raleigh","Bismarck","Columbus","Oklahoma City","Salem","Harrisburg","Providence","Columbia","Pierre","Nashville",
						   "Austin","Salt Lake City","Montpelier","Richmond","Olympia","Charleston","Madison","Cheyenne" };
	vector<int> rand_nums;
	map<string, string> Awnser_map;
	vector<string> correct;
	vector<string> incorrect;
	int num_questions = 0;

	getRandNums(num_questions);
	makeMaps(States, Capitals, Awnser_map);
	askQuestions(Awnser_map, correct, incorrect, States, num_questions);

}
//asks user how many questions they want. Between 1 - 100
//then generates that many random numbers between 1-50 
void getRandNums(int& num_questions)
{
	cout << "How many questions do you want? ";
	cin >> num_questions;
	cin.ignore();
	while (num_questions < 1 || num_questions > 50 || cin.fail())
	{
		cin.clear();
		cin.ignore(10000, '\n');

		cout << "Error. Please try again.\n";
		cout << "How many questions do you want? ";
		cin >> num_questions;
		cin.ignore();
	}
}

void makeMaps(vector<string>& States, vector<string>& Capitals, map<string, string>& Awnser_map)
{
	for (int count = 0; count < Capitals.size(); count++)
	{
		Awnser_map.emplace(States[count], Capitals[count]);
	}

	random_shuffle(States.begin(), States.end());
}

void askQuestions(map<string, string>& Awnser_map, vector<string>& corret_score, vector<string>& incorrect_score, const vector<string>& States, const int num_questions)
{
	int counter = 1;
	string user_awnser;
	cout << "its size is " << num_questions << endl;
	for (int count = 0; count < num_questions; count++)
	{
		auto it = Awnser_map.find(States[count]);
		string temp_capital = it->second;

		cout << "(" << counter << ".) " << "What is the capital of " << States[count] << ": ";
		getline(cin, user_awnser);
		string temp_user_awnser = user_awnser;

		for (char& letter : temp_user_awnser)
		{
			letter = tolower(letter);
		}

		for (char& letter : temp_capital)
		{
			letter = tolower(letter);
		}

		if (temp_user_awnser == temp_capital)
		{
			cout << "Correct!\n";
			corret_score.push_back("The capital of " + it->first + " is: " + user_awnser + " !!Correct !!");
		}
		else
		{
			cout << "Incorrect!\n";
			incorrect_score.push_back("The capital of " + it->first + " is: " + user_awnser + " !! Incorrect !! Awnser: " + it->second);
		}
		counter++;
	}

	cout << "Correct awnsers " << corret_score.size() << "/" << num_questions << endl;
	for (string index : corret_score)
	{
		cout << index << endl;
	}
	cout << "Incorrect awnsers " << incorrect_score.size() << "/" << num_questions << endl;
	for (string index : incorrect_score)
	{
		cout << index << endl;
	}
}

