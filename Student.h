#pragma once
#include "Person.h"
#include <iostream>
class Student :
	public Person
{
	double Mark;
	int StudentID;
public:
	Student();
	Student(string name, string email, string phone, double Mark, int StudentID);
	void PrintOut();

};
