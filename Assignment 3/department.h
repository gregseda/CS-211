/****************************************
Author: Greg Seda
Purpose: This is h-file for the Department class.
*******************************************/

#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <string>

using namespace std;

class Department
{
  friend class University;
 protected:
  long id;
  string name;
  string location;
  long chairId;
  static long nextDepartId;
 public:
  Department();
  ~Department();
  Department(string theName, string theLocation, long theChairId);
  void Print() const;
  string GetName();
  
};

#endif
