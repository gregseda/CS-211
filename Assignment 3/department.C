/************************************************
Author: Greg Seda
Purpose: This is the Department class file.
*****************************************************/
#ifndef DEPARTMENT_C
#define DEPARTMENT_C

#include "department.h"

#include <iostream>

using namespace std;

long Department::nextDepartId = 100;

Department::Department()
{
  id = nextDepartId;
  name = location = "Unknown";
  chairId = 0;
  nextDepartId++;
}
Department::~Department()
{
}
Department::Department(string theName, string theLocation, long theChairId)
{
  id = nextDepartId;
  name = theName;
  location = theLocation;
  chairId = theChairId;
  nextDepartId++;
}
void Department::Print() const
{
  cout << "Department Id: " << id << endl;
  cout << "Department Name: " << name << endl;
  cout << "Department Location: " << location << endl;
  cout << "Department Chair Id: " << chairId << endl;
}
string Department::GetName()
{
  return name;
}
#endif
