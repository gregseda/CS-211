using namespace std;

#include "employee.h"

int main()
{
  Employee emp1; 

  emp1.Print();

  Employee emp2;

  emp2.GetInfo();
  SetSalary(emp2);
  emp2.Print();
}
void SetSalary(Employee &e)
{
  if(e.empPosition == 'E' && e.yearOfExp < 2)
    {
      e.salary = 50000;
    }
  else if(e.empPosition == 'E' && e.yearOfExp >= 2)
    {
      e.salary = 55000;
    }
  else if(e.empPosition == 'P' && e.yearOfExp < 4)
    {
      e.salary = 60000;
    }
  else if(e.empPosition == 'M')
    {
      e.salary = 70000;
    }
  else if(e.empPosition == 'D')
    {
      e.salary = 80000;
    }
}
