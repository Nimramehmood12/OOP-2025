#include<iostream>
#include "LectureCourse.h"
#include "LabCourse.h"
using namespace std;

int main(){
    Course *c1=new LectureCourse("DD912",3);
    Course* c2=new LabCourse("DD103",1);

    c1->displayInfo();
    cout<<"Final Grade: "<<c1->calculateGrades()<<endl;

    c2->displayInfo();
    cout<<"Final Grade: "<<c2->calculateGrades()<<endl;

    delete c1;
    delete c2;
    return 0;
}