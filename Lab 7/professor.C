#include <iostream>

using namespace std;

#include "professor.h"

CompSciProfessor::CompSciProfessor()
{
  name = "Unknown";
  email = "Unknown";
  facultyId = 0;
}
CompSciProfessor::CompSciProfessor(string theName, string mail, long Id)
{
  name = theName;
  email = mail;
  facultyId = Id;
}
void CompSciProfessor:: GetInfo()
{
  cout << "Please enter your name: " << endl;
  getline(cin, name);

  cout << endl;

  cout << "Please enter you email: ";
  cin >> email;

  cout << endl;

  cout << "Please enter your faculty ID: ";
  cin >> facultyId;
}
