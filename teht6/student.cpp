#include "student.h"

Student::Student(string n, int a)
{
    Name = n;
    Age = a;

}

void Student::setAge(int age)
{
    Age = age;
}

void Student::setName(string name)
{
    Name = name;

}

string Student::getName()
{
    return Name;
}

int Student::getAge()
{
    return Age;
}

void Student::printStudentInfo()
{
    cout << "Student: " << Name << " Age " << Age << endl;
}
