#include "Person.h"

Person::Person() {
	name = "-";
	email = "-";
	phone = "-";
}

Person::Person(string name, string email, string phone) {
	this->name = name;
	this->email = email;
	this->phone = phone;
}
void Person::InitPerson(string name, string email, string phone) {
	this->name = name;
	this->email = email;
	this->phone = phone;
}
string Person::initName() {
	return name;
}
string Person::initEmail() {
	return email;
}
string Person::initPhone() {
	return phone;
}
