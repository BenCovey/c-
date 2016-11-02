#include <conio.h>
#include <iostream>
#include <string>
#include "Header.h"
#include "Student.cpp"

using namespace std;

int main()
{
	while (true) {
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
		//output student one using a loop.
		cout << "Student 1 name: " << sObj.Name << endl;
		for (int i = 1; i <= sObj.numCourse; i++) {
			cout << "Course " << i << ": " << sObj.Courses[i - 1] << endl;;
		}
		cout << "Deep copying student 2" << endl;

		student sObj2;
		sObj2.setName("Student 2");

		for (int i = 1; i <= sObj.numCourse; i++) {
			sObj2.addCourse(sObj.Courses[i - 1]);

		}
		//display second students delete array
		cout << "Student 2 name: " << sObj2.Name << endl;
		for (int i = 1; i <= sObj2.numCourse; i++) {
			cout << "Course " << i << ": " << sObj2.Courses[i - 1] << endl;;
		}
		//Delete first students array
		cout << "Deleting Courses from Student 1" << endl;
		sObj.deleteCourse();

		//display first students delete array
		cout << "Student 1 name: " << sObj.Name << endl;
		for (int i = 1; i <= sObj.numCourse; i++) {
			cout << "Course " << i << ": " << sObj.Courses[i - 1] << endl;;
		}
		//display second students delete array
		cout << "Student 2 name: " << sObj2.Name << endl;
		for (int i = 1; i <= sObj2.numCourse; i++) {
			cout << "Course " << i << ": " << sObj2.Courses[i - 1] << endl;;
		}
		_getch();
		return 0;

	}
}