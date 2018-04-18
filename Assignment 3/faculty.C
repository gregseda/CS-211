/**********************************************
Author: Greg Seda
Purpose: This is the Faculty class file.
*********************************************/
#ifndef FACULTY_C
#define FACULTY_C

#include "faculty.h"
#include "person.h"

#include <iostream>

using namespace std;

long Faculty::nextFacultyId = 600;

Faculty::Faculty()
{
  salary = 0;
  yearOfExp = 0;
  departId = 0;
}
Faculty::~Faculty()
{

}
Faculty::Faculty(string theName, string theEmail, string theAddress, string theBirth, string theGender, float theSalary, int theYearsOfExp, long theDepartId): Person(nextFacultyId, theName, theEmail, theAddress, theBirth, theGender)
{
  nextFacultyId++;
  salary = theSalary;
  yearOfExp = theYearsOfExp;
  departId = theDepartId;
}
void Faculty::Print() 
{
  Person::Print();
  cout << "Salary: " << salary << endl;
  cout << "Years of Experience: " << yearOfExp << endl;
  cout << "Department Id: " << departId << endl;
}

#endif
