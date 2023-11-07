// Copyright 2023
// Author: David Amoah

#include "Course.h"
#include <iostream>

using std::cout;
using std::endl;

// TODO: Define mutator functions -
//       SetCourseNumber(), SetCourseTitle()


// TODO: Define accessor functions -
//       GetCourseNumber(), GetCourseTitle()


// TODO: Define PrintInfo()
void Course::SetCourseNumber(string courseNum) {
    this -> courseNumber = courseNum;
}

void Course::SetCourseTitle(string Title) {
    this -> courseTitle = Title;
}

string Course::GetCourseNumber()  {
    return courseNumber;
}

string Course::GetCourseTitle()  {
    return courseTitle;
}

void Course::PrintInfo() {
    cout << "Course Information:" << endl;
    cout << "   Course Number: " << courseNumber << endl;
    cout << "   Course Title: " << courseTitle << endl;

}
