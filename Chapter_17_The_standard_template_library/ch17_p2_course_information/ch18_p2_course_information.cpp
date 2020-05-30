// ch18_p2_course_information.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>
#include <string>
#include <sstream>
using namespace std;

void getCourseId(string&);
int main()
{
	unordered_map<string, int>Rooms;
	unordered_map<string, string>Instructors;
	unordered_map<string, string>Time;
	string input;
	bool tryAgain = true;

	Rooms.emplace("CS101", 3004);
	Rooms.emplace("CS102", 4501);
	Rooms.emplace("CS103", 6755);
	Rooms.emplace("NT110", 1244);
	Rooms.emplace("CM241", 1411);
	Instructors.emplace("CS101", "Haynes");
	Instructors.emplace("CS102", "Alvardo");
	Instructors.emplace("CS103", "Rich");
	Instructors.emplace("NT110", "Burke");
	Instructors.emplace("CM241", "Lee");
	Time.emplace("CS101", "8:00 AM");
	Time.emplace("CS102", "9:00 AM");
	Time.emplace("CS103", "10:00 AM");
	Time.emplace("NT110", "Burke");
	Time.emplace("CM241", "Lee");

	while (tryAgain)
	{
		getCourseId(input);

		if (Rooms.count(input) != 0 && Instructors.count(input) != 0 && Time.count(input) != 0)
		{
			cout << "Room: " << Rooms[input] << endl;
			cout << "Instructor: " << Instructors[input] << endl;
			cout << "Time: " << Time[input] << endl;
			tryAgain = false;
		}
		else
		{
			char temp;
			cout << "Unable to find information for course " << '"' << input << '"' << " Enter Y to try again:" << endl;
			cin.get(temp);
			cin.ignore();
			if (toupper(temp) != 'Y') { tryAgain = false; }
		}
	}
}

void getCourseId(string& input)
{
	bool not_valid;
	bool tryAgain = true;
	string temp_string;

	do {
		tryAgain = false;
		cout << "Enter course ID: ";
		getline(cin, temp_string);
		stringstream ss(temp_string);
		ss >> input;
		if (input.length() != 5)
		{
			cout << "Course id must be 5 characters:\n";
			tryAgain = true;
		}
		else if ( !isalpha(input[0]) || !isalpha(input[1]))
		{
			cout << "First 2 characters of course ID must be letters.\n";
			tryAgain = true;
		}
		else if (tryAgain == false) {
			for (int count = 2; count != 4; count++)
			{
				if (!isdigit(input[count])) {
					cout << "Last 3 characters of course ID must be numbers.\n";
					tryAgain = true;
					break;
				}
			}
		}

	} while (tryAgain || cin.fail());
	input[0] = toupper(input[0]);
	input[1] = toupper(input[1]);

}