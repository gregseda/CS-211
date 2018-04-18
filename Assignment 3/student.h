/*****************************************************
Author: Greg Seda
Purpose: This is the h-file for the Student class.
****************************************************/
#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>
#include <iostream>

#include "course.h"
#include "person.h"

using namespace std;

class Student: public Person
{
  friend class University;
 protected:
  int yearOfStudy;
  string major;
  long advisorId;
  vector <Course> coursesTaken;
  static long nextStId;
 public:
  Student();
  ~Student();
  Student(string theName, string theEmail, string theAddress, string theBirth, string theGender, int theYearOfStudy, string theMajor, long theAdvisorId);
  void Print();
};

#endif
    
