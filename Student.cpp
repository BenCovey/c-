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
	student Student() {};//Default Constructor
	


	void addCourse(string Course) {
		//initialize array
		string* tempArray = new string[this->numCourse];
		//Loop through to make the old array equal the temp array
		for (int i = 0; i < this->numCourse; i++) {
			tempArray[i] = this->Courses[i];
		}

		//Overwrite Course Array to equal the full temp array

		this->numCourse++;
		Courses = new string[this->numCourse];

		for (int i = 0; i < this->numCourse; i++) {
			if (i == this->numCourse - 1) {
				this->Courses[i] =  Course;
			}
			else {
				this->Courses[i] = tempArray[i];
			}
		}

		//delete temp array
		delete[] tempArray;
		
	}


	void setName(string name) {
		this->Name = name;
		cout << "setName fired" << endl;
	}

	string getName() {
		return this->Name;
		cout << "getName fired" << endl;
	}

	int getNumCourses() {
		return this->numCourse;	
		cout << "getNumCourses fired" << endl;
	}

	void setNumCourses(int num) {
		this->numCourse = num;
		cout << "setNumCourses fired" << endl;
	}
};




