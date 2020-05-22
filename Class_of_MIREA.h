#pragma once	
#include "Student.h"
#include <vector>
using namespace std;
class Class_of_MIREA
{
    vector<Student> students;
public:
    void addStudent(Student student);
    void printStudents();
};
