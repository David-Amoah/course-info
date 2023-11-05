//
// Created by amoah on 11/5/2023.
//

#include "OfferedCourse.h"

#include "OfferedCourse.h"

// TODO: Define mutator functions -
//      SetInstructorName(), SetLocation(), SetClassTime()


// TODO: Define accessor functions -
//      GetInstructorName(), GetLocation(), GetClassTime()
void OfferedCourse::SetInstructorName(string name) {
    this -> instructorName = name;
}

void OfferedCourse::SetLocation(string location) {
    this -> storeLocation = location;
}

void OfferedCourse::SetClassTime(string classTime) {
    this -> classTime = classTime;
}

string OfferedCourse::GetInstructorName() {
    return instructorName;
}

string OfferedCourse::GetLocation() {
    return storeLocation;
}

string OfferedCourse::GetClassTime() {
    return classTime;
}
