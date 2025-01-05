#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "degree.h"

using namespace std;

class Student {
    private:
        string studentId;
        string firstName;
        string lastName;
        string email;
        int age;
        int numDays[3];
        DegreeProgram degreeProgram;

    public:

// d.  constructor using all of the input parameters provided in the table
        Student(string studentId, string firstName, string lastName, string email, int age, int numDays[], DegreeProgram degreeProgram);

// a.  an accessor (i.e., getter) for each instance variable from part D1
        string GetStudentId() const;
        string GetFirstName() const;
        string GetLastName() const;
        string GetEmail() const;
        int GetAge() const;
        int GetNumDays(int index) const;
        DegreeProgram GetDegreeProgram() const;

// b.  a mutator (i.e., setter) for each instance variable from part D1
        void SetStudentId(string studentId);
        void SetFirstName(string firstName);
        void SetLastName(string lastName);
        void SetEmail(string email);
        void SetAge(int age);
        void SetNumDays(int newNumDays[3]);
        void SetDegreeProgram(DegreeProgram degreeProgram);

// e.  print() to print specific student data
        void Print() const;

};

#endif