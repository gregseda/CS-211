/***************************************************
Author: Greg Seda
Purpose: This is the h-file for the Person class.
***************************************************/
#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class Person
{
 protected:
  long id;
  string name;
  string email;
  string address;
  string dateOfBirth;
  string gender;
 public:
  Person();
  Person(long theId, string theName, string theEmail, string theAddress, string theBirth, string theGender);
  ~Person();
  void Print();
};

#endif
