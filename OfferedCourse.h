//
// Created by amoah on 11/5/2023.
//

#ifndef COURSEINFO_OFFEREDCOURSE_H
#define COURSEINFO_OFFEREDCOURSE_H


#include "Course.h"

class OfferedCourse : public Course {
    // TODO: Declare private data members
private:
    string instructorName;
    string storeLocation;
    string classTime;

public:
    void SetInstructorName(string name);
    void SetLocation(string location);
    void SetClassTime(string classTime);
    string GetInstructorName();
    string GetLocation();
    string GetClassTime();


    // TODO: Declare mutator functions -
    //      SetInstructorName(), SetLocation(), SetClassTime()


    // TODO: Declare accessor functions -
    //      GetInstructorName(), GetLocation(), GetClassTime()


};




#endif //COURSEINFO_OFFEREDCOURSE_H
