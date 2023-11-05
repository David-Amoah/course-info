//
// Created by amoah on 11/5/2023.
//

#ifndef COURSEINFO_COURSE_H
#define COURSEINFO_COURSE_H


#include <iostream>
#include <string>

using namespace std;

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
