#ifndef TENURETRACKPROF_H
#define TENURETRACKPROF_H

#include <iostream>
using namespace std;

#include "professor.h"

class TenureTrackProf: public CompSciProfessor
{
 private:
  char rank;
  int YearOfExp;
 public:
  TenureTrackProf();
  TenureTrackProf(char theRank, int exp, string theName, string mail, int Id);
  void print() const;
  void GetInfo();
  float findSalary() const;
};



#endif
