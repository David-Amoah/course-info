// Copyright 2023
// Author: David Amoah

#ifndef COURSEINFO_NEWCXXTEST_H
#define COURSEINFO_NEWCXXTEST_H

#ifndef NEWCXXTEST_H
#define NEWCXXTEST_H



#include "Course.h"
#include "OfferedCourse.h"
#include <iostream>

using std::cout;
using std::endl;

#include <cxxtest/TestSuite.h>

class newCxxTest : public CxxTest::TestSuite {
public:


    void testMyCourseClass() {   ///test for the NameNode class

        Course newCourse;
        newCourse.SetCourseNumber("MAT233");
        newCourse.SetCourseTitle("Calculus I");

        TS_ASSERT_EQUALS(newCourse.GetCourseNumber(), "MAT233");
        TS_ASSERT_EQUALS(newCourse.GetCourseTitle(), "Calculus I");

        cout << endl;

        newCourse.PrintInfo();


    }

    void testMyOfferedCourseClass() {   ///test for the NameNode class
        OfferedCourse course1;

//        course1.SetCourseNumber("SCI102");
//        course1.SetCourseTitle("Biology");

        course1.SetInstructorName("Elmer Eubanks");
        course1.SetLocation("Campus");
        course1.SetClassTime("M-W-F: 2-3pm");
        course1.SetTerm("Summer24");

//        TS_ASSERT_EQUALS(course1.GetCourseNumber(), "SCI102");
//        TS_ASSERT_EQUALS(course1.GetCourseTitle(), "Biology");

        TS_ASSERT_EQUALS(course1.GetInstructorName(), "Elmer Eubanks");
        TS_ASSERT_EQUALS(course1.GetLocation(), "Campus");
        TS_ASSERT_EQUALS(course1.GetClassTime(), "M-W-F: 2-3pm");
        TS_ASSERT_EQUALS(course1.GetTerm(), "Summer24");

        //course1.PrintInfo();



    }


};
#endif /* NEWCXXTEST_H */

#endif //COURSEINFO_NEWCXXTEST_H// copyright 2023
// Author: David Amoah

