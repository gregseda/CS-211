#ifndef ADJUNCTPROF_H
#define ADJUNCTPROF_H

using namespace std;
#include "professor.h"

class AdjunctProf: public CompSciProfessor
{
 private:
  char degree;
  int NoOfTA;
  int NoOfCourses;
 public:
  AdjunctProf();
  AdjunctProf(char deg, int TA, int courses, string theName, string mail, int Id);
  void print() const;
  void GetInfo();
  float findSalary() const;
};




#endif
