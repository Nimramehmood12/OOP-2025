#include <iostream>
#include "LabCourse.h"
using namespace std;

LabCourse::LabCourse(string code, int c) : Course(code, c) {}

void LabCourse::displayInfo() {
    cout << "Lab Course: " << courseCode << ", Credits: " << credits << endl;
}

float LabCourse::calculateGrades() {
    return 75.0; 
}
