#include <iostream>

using namespace std;

#include "AdjunctProf.h"

AdjunctProf::AdjunctProf()
{
  degree = '?';
  NoOfTA = 0;
  NoOfCourses = 0;
}
AdjunctProf::AdjunctProf(char deg, int TA, int courses, string theName, string mail,  int Id):CompSciProfessor(theName, mail, Id)
{
  degree = deg;
  NoOfTA = TA;
  NoOfCourses = courses;
}
void AdjunctProf::print() const
{
  cout << "Name: " << name << endl;
  cout << "Email: " << email << endl;
  cout << "Faculty Id: " << facultyId << endl;
  cout << "Degree: " << degree << endl;
  cout << "Number of TAs: " << NoOfTA << endl;
  cout << "Number of Course Taught: " << NoOfCourses << endl;
}
void AdjunctProf::GetInfo()
{
  cout << "B --> Bachelor Degree, M --> Master Degree, P --> PhD" << endl;
  cout << "Please enter your degree: ";
  cin >> degree;

  cout << "Please enter the amount TAs you are doing for your courses: ";
  cin >> NoOfTA;

  cout << "Please enter the amount of courses you are teaching for this department: ";
  cin >> NoOfCourses;
}
float AdjunctProf::findSalary() const
{
  float salary;
  if(degree == 'B')
    {
      salary = (NoOfTA * 1500) + (NoOfCourses * 3000);
    }
  if(degree == 'M')
    {
      salary = (NoOfTA * 2000) + (NoOfCourses * 4000);
    }
  if(degree == 'P')
    {
      salary = (NoOfTA * 2500) + (NoOfCourses * 5000);
    }
  return salary;
}
