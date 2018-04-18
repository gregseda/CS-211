/******************************************
Author: Greg Seda
Purpose: This is the driver of the program. It is used to run the program.
*******************************************/
#include <iostream>

#include "student.h"
#include "course.h"
#include "person.h"
#include "faculty.h"
#include "university.h"
#include "department.h"

using namespace std;

int main()
{
  University csusm;
  csusm.ProcessTransactionFile("Transaction.txt");
 
  return 0;
}
