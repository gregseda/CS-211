/*********************************************************
Author: Greg Seda
Purpose: This is the Student class file.
********************************************************/
#ifndef STUDENT_C
#define STUDENT_C

#include "student.h"

#include <iostream>

using namespace std;

long Student:: nextStId = 500;

Student::Student()
{
  yearOfStudy = 0;
  major = "?????????";
  advisorId = 0;
}
Student::~Student()
{

}
Student::Student(string theName, string theEmail, string theAddress, string theBirth, string theGender, int theYearOfStudy, string theMajor, long theAdvisorId):Person(nextStId, theName, theEmail, theAddress, theBirth, theGender)
{
  nextStId++;
  yearOfStudy = theYearOfStudy;
  major = theMajor;
  advisorId = theAdvisorId;
}
void Student::Print()
{
  Person::Print();
  cout << "Years of Study: " << yearOfStudy << endl;
  cout << "Major: " << major << endl;
  cout << "Advisor Id: " << advisorId << endl;
}

#endif
