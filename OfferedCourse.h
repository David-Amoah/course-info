// Copyright 2023
// Author: David Amoah

#ifndef COURSEINFO_OFFEREDCOURSE_H
#define COURSEINFO_OFFEREDCOURSE_H


#include "Course.h"

class OfferedCourse : public Course {
    // TODO: Declare private data members
private:
    string instructorName;
    string storeLocation;
    string classTime;
    string newterm;

public:
    void SetInstructorName(string name);
    void SetLocation(string location);
    void SetClassTime(string classTime);
    void SetTerm(string term);
    string GetTerm();
    string GetInstructorName();
    string GetLocation();
    string GetClassTime();


    // TODO: Declare mutator functions -
    //      SetInstructorName(), SetLocation(), SetClassTime()


    // TODO: Declare accessor functions -
    //      GetInstructorName(), GetLocation(), GetClassTime()


};




#endif //COURSEINFO_OFFEREDCOURSE_H
