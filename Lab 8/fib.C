#include <iostream>

using namespace std;

//****************************************************
int fib(int n)
{
  int a = 0;
  if(n == 1)
    {
      return 1;
    }
  else if(n == 0)
    {
      return 0;
    }
      a = fib(n-1);
      int b = fib(n-2);

      int c = a + b;
      return c;
    }

//*(*********************************************************
bool isFib(int num)
{
  int n = 0;
  int theFib = 0;

  while(theFib != num)
    {
      theFib = fib(n);

      if(theFib == num)
	return true;
      else if(theFib > num)
	return false;
      else
	n++;
    }
}
//************************************************************************
int main()
{
  int num = 0;
  
  cout << "Enter a number (negative number to quit): ";
  cin >> num;
  
  while(num >= 0)
    {
      if(num == 0)
	{
	  cout << "Yes, you got it, " << num << " is a Fibonacci number." << endl;
          cout << "Enter a number (negative number to quit): ";
          cin >> num;
	}
      else if(isFib(num))
	{
	  cout << "Yes, you got it, " << num << " is a Fibonacci number." << endl;
	  cout << "Enter a number (negative number to quit): ";
	  cin >> num;
	}
      else
	{
	  cout << "!!!!! Sorry " << num << " is not a Fibonacci number." << endl;
	  cout << "Enter a number (negative number to quit): ";
          cin >> num;
	}
    }
  cout << "*Thanks - Have a good Day*)" << endl;
  
  return 0;
}
