#include "Student.h"

Student::Student(double Mark, int StudentID, string name, string email, string phone)
{
	this->name = name;
	this->email = email;
	this->phone = phone;
	this->StudentID = StudentID;
	this->Mark = Mark;
}

void Student::PrintOut()
{
	cout << "ID: " << StudentID << "| " << name << "| email:" << email << "| average_mark:" << Mark<<endl;
}
