#include "Class_of_MIREA.h"

void Class_of_MIREA::addStudent(Student student)
{
	students.push_back(student);
}

void Class_of_MIREA::printStudents()
{
	cout << "MIREA students" << endl;
	for (int i = 0; i < students.size(); i++) {
		students[i].PrintOut();
	}

}
