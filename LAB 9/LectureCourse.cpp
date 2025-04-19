#include"LectureCourse.h"
#include<iostream>
using namespace std;

LectureCourse::LectureCourse(string code,int c):Course(code,c){}

void LectureCourse::displayInfo(){
    cout << "Lecture Course: " << courseCode << ", Credits: " << credits << endl;
}

float LectureCourse::calculateGrades() {
    return 85.5; 
}