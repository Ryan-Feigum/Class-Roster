#include <iostream>
#include "student.h"
#include "degree.h"
using std::string;
using std::cout;
using std::cin;
using std::endl;


// d.  constructor using all of the input parameters provided in the table
Student::Student(string newId, string newFirstName, string newLastName, string newEmail, int newAge, int newNumDays[3], DegreeProgram newDegree) {
    studentId = newId;
    firstName = newFirstName;
    lastName = newLastName;
    email = newEmail;
    age = newAge;
    for (int i = 0; i < 3; ++i) {
        numDays[i] = newNumDays[i];
    }
    degreeProgram = newDegree;
}

// 2.  Create each of the following functions in the Student class:
// 
// Accessor (i.e., getter) for each instance variable from part D1
        string Student::GetStudentId() const {
            return studentId;
        }
        string Student::GetFirstName() const {
            return firstName;
        }
        string Student::GetLastName() const {
            return lastName;
        }
        string Student::GetEmail() const {
            return email;
        }
        int Student::GetAge() const { 
            return age;
        }
        int Student::GetNumDays(int index) const {
            return numDays[index];
        }
        DegreeProgram Student::GetDegreeProgram() const {
            return degreeProgram;
        }
// Mutator (i.e., setter) for each instance variable from part D1
        void Student::SetStudentId(string newId) {
            studentId = newId;
        }
        void Student::SetFirstName(string newFirstName) {
            firstName = newFirstName;
        }
        void Student::SetLastName(string newLastName) {
            lastName = newLastName;
        }
        void Student::SetEmail(string newEmail) {
            email = newEmail;
        }
        void Student::SetAge(int newAge) {
            age = newAge;
        }
        void Student::SetNumDays(int newNumDays[3]) {
            for (int i = 0; i < 3; ++i)
            numDays[i] = newNumDays[i];
        }
        void Student::SetDegreeProgram(DegreeProgram newDegree) {
            degreeProgram = newDegree;
        }
// c.  All external access and changes to any instance variables of the Student class must be done using accessor and mutator functions.
// 

// Print() to print specific student data

//that prints a complete tab-separated list of student data in the provided format: A1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab]daysInCourse: {35, 40, 55} Degree Program: Security. 
        void Student::Print() const {
            cout << studentId << "  ";
            cout << "First Name: " << firstName << "    ";
            cout << "Last Name: " << lastName << "  ";
            cout << "Email: " << email << " ";
            cout << "Age: " << age << " ";
            cout << "daysInCourse: " << "{";
            for (int i = 0; i < 3; ++i) {
                cout <<  numDays[i];
                if (i < 2) cout << ", ";
            }
            cout << "} ";
            cout << "Degree Program: " << degreeProgram;
        }