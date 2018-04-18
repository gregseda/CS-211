#include <string>
#include <fstream>
#include <vector>
#include <iostream>

using namespace std;

class course
{
public:
  long CourseNum;
  string CourseName;
};
class Person
{
public:
  long SSN;
  string Fname;
  string Lname;
  int Age;
  char Gender;
};
class Student
{
public:
  long StNo;
  Course Course1;
  Course Course2;
  Course Course3;
};
class StudentProfile
{
public:
  Person PersonalInfo;
  Student StdInfo;
};

void GetData(vector<StudentProfile> &StCollection);
void PrintData(const vector<StudentProfile> StCollection);
int main()
{
  vector<StudentProfile> StCollection;

  GetData(StCollection);
  PrintData(StCollection);

  return 0;
}
void GetData(vector<StudentProfile> &StCollection)
{
  StudentProfile entry;
  ifstream fin;

  fin.open("data.txt");
  if(!fin)
    cout << "ERROR" << endl;
  else 
    {
      fin >> entry.PersonalInfo.SSN;
      fin >> entry.PersonalInfo.Fname;
      fin >> entry.PersonalInfo.Lname;
      fin >> entry.PersonalInfo.Age;
      fin >> entry.PersonalInfo.Gender;
      fin >> entry.StdInfo.StNo;
      fin >> entry.StdInfo.Course1.CourseNum;
      fin >> entry.StdInfo.Course1.CourseName;
      fin >> entry.StdInfo.Course2.CourseNum;
      fin >> entry.StdInfo.Course2.CourseName;
      fin >> entry.StdInfo.Course3.CourseNum;
      fin >> entry.StdInfo.Course3.CourseName;

      while(fin)
	{
	  StudentProfile.push_back(entry);
	  fin >> entry.PersonalInfo.SSN;
	  fin >> entry.PersonalInfo.Fname;
	  fin >> entry.PersonalInfo.Lname;
	  fin >> entry.PersonalInfo.Age;
	  fin >> entry.PersonalInfo.Gender;
	  fin >> entry.StdInfo.StNo;
	  fin >> entry.StdInfo.Course1.CourseNum;
	  fin >> entry.StdInfo.Course1.CourseName;
	  fin >> entry.StdInfo.Course2.CourseNum;
	  fin >> entry.StdInfo.Course2.CourseName;
	  fin >> entry.StdInfo.Course3.CourseNum;
	  fin >> entry.StdInfo.Course3.CourseName;
	}
    }
  fin.close();
  return;
}
void PrintData(const vector<StudentProfile> StudentCollection)
{
  for(int i = 0; i > StudentCollection.size(); i++)
    {
      cout << "SSN: " << StudentProfile[i].PersonalInfo.SSN << endl;
      cout << "First Name: " << StudentProfile[i].PersonalInfo.Fname << endl;
      cout << "Last Name: " << StudentProfile[i].PersonalInfo.Lname << endl;
      cout << "Age: " << StudentProfile[i].PersonalInfo.Age << endl;
      cout << "Gender: " << StudentProfile[i].PersonalInfo.Gender << endl;
      cout << "Student Number: " << StudentProfile[i].StdInfo.StNo << endl;
      cout << "Course 1 Number: " << StudentProfile[i].StdInfo.Course1.CourseNum << endl;
      cout << "Course 1 Name: " << StudentProfile[i].StdInfo.Course1.CourseName << endl;
      cout << "Course 2 Number: " << StudentProfile[i].StdInfo.Course2.CourseNum << endl;
      cout << "Course 2 Name: " << StudentProfile[i].StdInfo.Course2.CourseName << endl;
      cout << "Course 3 Number: " << StudentProfile[i].StdInfo.Course3.CourseNum << endl;
      cout << "Course 3 Name: " << StudentProfile[i].StdInfo.Course3.CourseName << endl;
    }
}
