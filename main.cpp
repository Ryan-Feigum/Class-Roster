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
// 
// 3.  Add each student to classRoster.
    classRoster.PopulateRoster();

// 
// 4.  Convert the following pseudo code to complete the rest of the  main() function:
// 
    classRoster.PrintAll();
// 
    classRoster.PrintInvalidEmails();
// 
//  
// 
// //loop through classRosterArray and for each element:
// 
    for (int i = 0; i < 5; ++i) {
    classRoster.PrintAverageDaysInCourse(classRoster.classRosterArray[i]->GetStudentId());
    }
// 
// 
// Note: For the current_object's student id, use an accessor (i.e., getter) for the classRosterArray to access the student id.
// 
// 
// 
    classRoster.PrintByDegreeProgram(SOFTWARE);
// 
    classRoster.Remove("A3");
// 
// classRoster.printAll();
// 
// classRoster.remove("A3");
// 
// //expected: the above line should print a message saying such a student with this ID was not found.
// 
// 5.  Implement the destructor to release the memory that was allocated dynamically in Roster.
// 

return 0;
};