#ifndef LECTURECOURSE
#define LECTURECOURSE
#include "Course.h"

class LectureCourse:public Course{
   public:
   LectureCourse(string code,int c);
   void displayInfo() override;
   float calculateGrades() override;
};

#endif