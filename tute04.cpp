/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no); //function prototype
long nCr(int a, int b);//function prototype

int main() {
  int n, r;
  std::cout << "Enter a value for n ";//get values from user
  std::cin >> n;
  std::cout << "Enter a value for r ";//get values from user
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}
//find the factorial in function
long Factorial(int no)
{
  int fac;
  fac = 1;
    for (int i=no; i >=1; i--)
      {
        fac = fac * i;
      }
  return fac;
}
long nCr(int a, int b)
{
  int cal;
  cal=Factorial(a)/(Factorial(b)*Factorial(a-b));
    return cal;
}
