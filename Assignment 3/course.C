/**************************************************
Author: Greg Seda
Purpose: This the Course class file.
********************************************************/
#ifndef COURSE_H
#define COURSE_H

#include "course.h"

#include <iostream>

using namespace std;

long Course:: nextCRN = 200;

Course::Course() 
{
  CRN = nextCRN;
  maxAvailableSeats = 0;
  name = "Unknown";
  departId = 0;
  assignedSeats = 0;
  isTaughtBy = 0;
  nextCRN++;
}
Course::~Course()
{

}
Course::Course(string theName, long theDepartId, long taughtBy, int theMax)
{
  CRN = nextCRN;
  maxAvailableSeats = theMax;
  name = theName;
  departId = theDepartId;
  assignedSeats = 0;
  isTaughtBy = taughtBy;
  nextCRN++;
}
void Course:: Print() const
{
  cout << "CRN: " << CRN << endl;
  cout << "Maximum Available Seats: " << maxAvailableSeats << endl;
  cout << "Course Name: " << name << endl;
  cout << "Department Id: " << departId << endl;
  cout << "Assigned Seats: " << assignedSeats << endl;
  cout << "Course Is Taught By: " << isTaughtBy << endl;
}

#endif
