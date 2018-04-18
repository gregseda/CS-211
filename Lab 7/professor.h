#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <iostream> 
#include <string>
using namespace std;

class CompSciProfessor
{
 protected:
  string name;
  string email;
  long facultyId;
 public:
  CompSciProfessor();
  CompSciProfessor(string theName, string mail, long Id);
  void print() const;
  void GetInfo();
}; 

#endif
