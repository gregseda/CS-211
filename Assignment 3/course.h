/****************************************************
Author: Greg Seda
Purpose: This is the h-file for the Course class.
***************************************************/
#ifndef COURSE_C
#define COURSE_C

#include <string>

using namespace std;

class Course
{
  friend class University;
 protected:
  long CRN;
  int maxAvailableSeats;
  string name;
  long departId;
  long assignedSeats;
  long isTaughtBy;
  static long nextCRN;
 public:
  Course();
  ~Course();
  Course(string theName, long theDepartId, long taughtBy, int theMax);
  void Print() const;
  void GetInfo();
};

#endif
