#include <conio.h>
#include <iostream>
#include <string>
#include "Header.h"
#include "Student.cpp"

using namespace std;

int main()
{
	string name = "";
	cout << "Enter a student name" << endl;
	//Take input from cin(getline)
	getline(cin, name);
	cin.clear();

	student sObj;

	sObj.setName(name);
	while (true) {
		//Make new string for course
		string Course;
		cout << "Enter next course(Type done to finish entering courses: " << endl;
		//take input from cin(getline)
			getline(cin, Course);
		cin.clear();
		if (Course != "done") {
			sObj.addCourse(Course);
		}
		else {
			break;
		}

	}
	cout << "Student 1 name: " << sObj.Name << endl;
	for (int i = 1; i <= sObj.numCourse; i++) {
		cout << "Course " << i << ": " << sObj.Courses[i - 1] << endl;;
	}
	_getch();
	return 0;
}
