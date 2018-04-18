#include <iostream>

using namespace std;

int gcd(int x, int y)
{
  if(y == 0)
    return x;
  else
    {
      int a = gcd(x,x%y);
      return a;
    }
}
