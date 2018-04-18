#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

#include "professor.h"
#include "AdjunctProf.h"
#include "TenureTrackProf.h"

int main()
{
  AdjunctProf ap('M', 2, 1, "Adam Smith", "asmith@csusm.edu", 12345);

  float salary1 = ap.findSalary();
  
  cout << endl;
  ap.print();

  cout << "Salary: " << salary1 << endl;

  TenureTrackProf ttp('S', 8, "Jim Anderson", "janderson@csusm.edu", 54321);
  
  float salary2 = ttp.findSalary();
  
  cout << endl;
  ttp.print();
  
  cout << "Salary: " << salary2 << endl;
  return 0;
}
