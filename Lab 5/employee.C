#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

#include "employee.h"

int Employee:: nextOfficeNo = 10;
int Employee:: totalNumofEmployees = 0;
int Employee:: nextEmpId = 1000;
Employee::Employee() : officeNo(nextOfficeNo), empId(nextEmpId)
{
  name = "Unkown";
  deptNo = 0;
  empPosition = '?';
  yearOfExp = 0; 
  salary = 0;

  totalNumofEmployees++;
  nextEmpId++;
  nextOfficeNo++;
}
Employee::~Employee()
{
  totalNumofEmployees--;
  nextEmpId--;
  nextOfficeNo--;
}
Employee::Employee(string theName, int theDeptNo, char theEmpPosition, int theYearOfExp):officeNo(nextOfficeNo), empId(nextEmpId)
{
  name = theName;
  deptNo = theDeptNo;
  empPosition = theEmpPosition;
  yearOfExp = theYearOfExp;
  
  totalNumofEmployees++;
  nextEmpId++;
  nextOfficeNo++;
}
void Employee:: Print() const
{
  cout << "Name:\t" << name << endl;
  cout << "Office Number:\t" << officeNo << endl;
  cout << "Employee ID:\t" << empId << endl;
  cout << "Department Number:\t" << deptNo << endl;
  cout << "Employee Position:\t" << empPosition << endl;
  cout << "Years of Experience:\t" << yearOfExp << endl;
  cout << "Salary:\t" << salary << endl;
  cout << "Total Number Of Employees:\t" << totalNumofEmployees << endl;
}
void Employee:: GetInfo()
{
  cout << "Please enter your name:" << endl;
  getline(cin, name);
  cout << endl;

  cout << ".E.: entry level, .M.: manager, .D.: Director, .P.:Project_leader" << endl;
  cout << "Please enter your employee posistion:\t";
  cin >> empPosition;
  cout << endl;

  cout << "Please enter your years of experience:\t";
  cin >> yearOfExp;
  cout << endl;
}
