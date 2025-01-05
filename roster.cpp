#include <iostream>
#include "roster.h"
#include "student.h"
#include "degree.h"
#include <sstream>
#include <vector>
#include <stdexcept>

using namespace std;


// Provided starting data table
const string studentData[5] = {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,[firstname],[lastname],[emailaddress],[age], [numberofdaystocomplete3courses],SOFTWARE"};

// 1.  Create an array of pointers, classRosterArray, to hold the data provided in the “studentData Table.”
Student* classRosterArray[5];

// 2.  Create a student object for each student in the data table and populate classRosterArray.
void PopulateRoster() {
    for (int i = 0; i < 5; ++i) {
        // Parse each set of data identified in the “studentData Table.”
        istringstream ss(studentData[i]);
        vector<string> tokens;
        string token;

        while (getline(ss, token, ',')) {
            tokens.push_back(token);
        }

        if (tokens.size() < 9) {
            throw runtime_error("Invalid student data format.");
        }

        // Extract data
        string studentId = tokens[0];
        string firstName = tokens[1];
        string lastName = tokens[2];
        string email = tokens[3];
        int age = stoi(tokens[4]);
        int daysInCourse1 = stoi(tokens[5]);
        int daysInCourse2 = stoi(tokens[6]);
        int daysInCourse3 = stoi(tokens[7]);
        string degreeStr = tokens[8];

        DegreeProgram degreeProgram;
        if (degreeStr == "SECURITY") {
            degreeProgram = DegreeProgram::SECURITY;
        } else if (degreeStr == "NETWORK") {
            degreeProgram = DegreeProgram::NETWORK;
        } else if (degreeStr == "SOFTWARE") {
            degreeProgram = DegreeProgram::SOFTWARE;
        } else {
            throw runtime_error("Unknown degree program: " + degreeStr);
        }

        // Add each student object to classRosterArray.
        int numDays[3] = {daysInCourse1, daysInCourse2, daysInCourse3};
        classRosterArray[i] = new Student(studentId, firstName, lastName, email, age, numDays, degreeProgram);
    
    }
}

// 3.  Define the following functions --------------------------------------------------------
 
// Set the instance variables from part D1 and updates the roster.
    void Add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram)  {};
 
// Remove students from the roster by student ID. If the student ID does not exist, the function prints an error message indicating that the student was not found.
    void Remove(string studentID)  {};

// Print a complete tab-separated list of student data in the provided format: A1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab]daysInCourse: {35, 40, 55} Degree Program: Security. The printAll() function should loop through all the students in classRosterArray and call the print() function for each student.
    void PrintAll() {
        for (int i = 0; i < 5; ++i) {
            classRosterArray[i]->Student::Print();
        }
    };

// Print a student’s average number of days in the three courses. The student is identified by the studentID parameter.
    void PrintAverageDaysInCourse(string studentID) {

    };

// Verify student email addresses and displays all invalid email addresses to the user.
// Note: A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').
    void PrintInvalidEmails() {

    };


// Print out student information for a degree program specified by an enumerated type.
    void PrintByDegreeProgram(DegreeProgram degreeProgram) {

    };

