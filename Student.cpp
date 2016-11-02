#include <conio.h>
#include <iostream>
#include <string>
#include "Header.h"

using namespace std;
//Prototypes

class student
{

public:
	string Name = "student";
	int numCourse = 0;
	string *Courses = new string;
	//student(string newName);
	//student(const student& rightStudent); //default Constructor
	//student &operator=(const student& rightside);//overloaded assignment operator

	void addCourse(string Course) {
		//initialize array
		string* tempArray = new string[this->numCourse];
		//Loop through to make the old array equal the temp array
		for (int i = 0; i < this->numCourse; i++) {
			tempArray[i] = this->Courses[i];
		}
		delete[] Courses;
		//Overwrite Course Array to equal the full temp array

		this->numCourse++;
		Courses = new string[this->numCourse];

		for (int i = 0; i < this->numCourse; i++) {
			if (i == this->numCourse - 1) {
				this->Courses[i] = Course;
			}
			else {
				this->Courses[i] = tempArray[i];
			}
		}

		//delete temp array
		delete[] tempArray;
	}

	void deleteCourse() {
		cout << "----------------" << endl;
		cout << "Destructor Fired." << endl;
		cout << "----------------" << endl;
		delete[] Courses;
		Courses = new string[numCourse];
	}

	void setName(string name) {
		this->Name = name;
	}

	string getName() {
		return this->Name;
	}

	int getNumCourses() {
		return this->numCourse;	
	}

	void setNumCourses(int num) {
		this->numCourse = num;
	}
	
	//Destructor Constructor
	student::~student() {
		cout << "----------------" << endl;
		cout << "Destructor Fired." << endl;
		cout << "----------------" << endl;
		try {
			delete[] Courses;
		}
		catch (exception& e) {

		}
	}
};




