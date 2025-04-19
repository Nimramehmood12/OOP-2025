#ifndef COURSE
#define COURSE
#include<string>
using namespace std;
class Course{
    protected:
    string courseCode;
    int credits;

    public:
    Course(string code,int c);
    virtual void displayInfo()=0;
    virtual float calculateGrades()=0;
};

#endif