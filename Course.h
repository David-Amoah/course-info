// Copyright 2023
// Author: David Amoah

#ifndef COURSEINFO_COURSE_H
#define COURSEINFO_COURSE_H


#include <iostream>
#include <string>

using std::string;

class Course {
    // TODO: Declare private data members
private:
    string courseNumber;
    string courseTitle;


    // TODO: Declare mutator functions
    //       SetCourseNumber(), SetCourseTitle()
public:
    void SetCourseNumber(string courseNum);
    void SetCourseTitle(string Title);


    // TODO: Declare accessor functions -
    //       GetCourseNumber(), GetCourseTitle()

    string GetCourseNumber();
    string GetCourseTitle();


    // TODO: Declare PrintInfo()

    void PrintInfo();

};





#endif //COURSEINFO_COURSE_H
