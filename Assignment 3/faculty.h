/*****************************************
Author: Greg Seda
Purpose: This is the h-file for the Faculty class.
****************************************/
#ifndef FACULTY_H
#define FACULTY_H

#include <iostream>

#include "person.h"

using namespace std;

class Faculty: public Person
{
  friend class University;
 protected:
  float salary;
  int yearOfExp;
  long departId;
  static long nextFacultyId;
 public:
  Faculty();
  ~Faculty();
  Faculty(string theName, string theEmail, string theAddress, string theBirth, string theGender, float theSalary, int theYearsOfExp, long theDepartId);
  void Print();
};

#endif
