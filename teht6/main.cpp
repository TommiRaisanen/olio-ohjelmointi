#include <iostream>
#include <vector>
#include "student.h"
#include <algorithm>

using namespace std;

int main ()
{
    int selection =0;
    string name;
    vector<Student>studentList;
    //alussa luodaan opiskelijat
    Student a("Jonne", 12);
    Student b("Anne", 73);
    Student c("Tero", 42);
    Student d("Erkkari", 87);


    studentList.push_back(a);
    studentList.push_back(b);
    studentList.push_back(c);
    studentList.push_back(d);



    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        //cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
            // case 0:
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.
            //students *s = new student
            // studentlist ->lisää (student)
        case 1:
            for(Student s : studentList){
                s.printStudentInfo();
            }
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            break;

        case 2:
            sort(studentList.begin(), studentList.end(), [](Student &a, Student &b){
                return a.getName() < b.getName();
            });

            for(Student s : studentList){
                s.printStudentInfo();
            }

            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            break;

        case 3:

            sort(studentList.begin(), studentList.end(), [](Student &a, Student &b){
                return a.getAge() > b.getAge();
            });

            for(Student s : studentList){
                s.printStudentInfo();
            }
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            break;
        case 4:
        {
            cout << "Annappa nimi: ";
            cin >> name;

            auto it = std::find_if(studentList.begin(), studentList.end(), [name](Student &s){
                return s.getName() == name;
            });

            if(it != studentList.end()){
                cout << "found"
                     << endl;
                it->printStudentInfo();

            } else {
                cout << "Ei löytynyt";
                break;

            }
            }
           break;
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.


        default:
            cout<< "Wrong selection, stopping..."<< endl;
            break;

        }


    }

    while(selection < 5);


    return 0;
}
