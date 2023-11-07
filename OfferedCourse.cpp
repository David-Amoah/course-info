// Copyright 2023
// Author: David Amoah

#include "OfferedCourse.h"
#include "Course.h"

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

string OfferedCourse::GetTerm() {
    return newterm;
}

void OfferedCourse::SetTerm(string term) {
    this -> newterm = term;
}
