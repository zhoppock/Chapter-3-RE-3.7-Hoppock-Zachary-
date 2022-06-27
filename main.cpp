// Hoppock, Zachary
// intsAndFloats.cpp
// 9/27/20
// Comparing integers and floats with each other
// Version # 1
#include <iostream>
#include <cmath>

using namespace std;

int main()
{  
int n = pow(sqrt(10),2);
double x = pow(sqrt(10),2);
if (n == 10)
  {cout << "Integer matches" << endl;}
if (x == 10)
  {cout << "Floating point matches" << endl;}
cout << "x approximately equals " << x;
return 0;
}