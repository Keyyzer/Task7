#pragma once
#include <string>
using namespace std;
class Person
{
protected:
	string name;
	string email;
	string phone;
public:
	Person();
	Person(string name, string email, string phone);
	void InitPerson(string name, string email, string phone);
	string initName();
	string initEmail();
	string initPhone();
};
