#include <iostream>
#include "Class_of_MIREA.h"
using namespace std;

int main() {
	Class_of_MIREA mirea;
	Student temp_student("Stud1", "student1@mirea.ru", "9825-4753", 4, 1);
	mirea.addStudent(temp_student);
	Student temp_student2("Stud2", "student@mirea.ru", "9825-4753", 4, 2);
	mirea.addStudent(temp_student2);
	mirea.printStudents();
}
