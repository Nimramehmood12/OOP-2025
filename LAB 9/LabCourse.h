#ifndef LABCOURSE
#define LABCOURSE
#include "Course.h"

class LabCourse:public Course{
    public:
    LabCourse(string code,int c);
    void displayInfo() override;
   float calculateGrades() override;
};

#endif