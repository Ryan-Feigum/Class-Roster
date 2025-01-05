#include <iostream>
#include "roster.h"
#include "student.h"

using namespace std;

// Demonstrate the program’s required functionality by adding a main() function in main.cpp, which will contain the required function calls to achieve the following results:
int main() {
    // 1.  Print out to the screen, via your application, the course title, the programming language used, your WGU student ID, and your name.
    cout << "Course: C867: Scripting and Programming - Applications" << endl;
    cout << "Language: C++" << endl;
    cout << "Student ID: 012458729" << endl;
    cout << "Name: Ryan Feigum" << endl;

    // 2.  Create an instance of the Roster class called classRoster.
    Roster classRoster;
 
    // 3.  Add each student to classRoster.
    classRoster.PopulateRoster();

    // 4.  Convert the following pseudo code to complete the rest of the  main() function:
 
    // Print all students
    classRoster.PrintAll();
 
    // Print invalid emails
    classRoster.PrintInvalidEmails();

    // Print average days in course for each student
    for (int i = 0; i < 5; ++i) {
        string studentId = classRoster.GetStudentId(i);
        classRoster.PrintAverageDaysInCourse(studentId);
    }
    // Print students by degree program
    classRoster.PrintByDegreeProgram(DegreeProgram::SOFTWARE);

    // Remove student A3
    classRoster.Remove("A3");

    // Print all students to show A3 was removed
    classRoster.PrintAll();

    // Attempt to remove student A3 again to show error message when attempting to remove a student which does not exist
    classRoster.Remove("A3");

    // Roster class destructor will be automatically called when classRoster goes out of scope

    return 0;
};