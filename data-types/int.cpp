#include <iostream>
using namespace std;

int main() {
  int num1 = 1;
  signed int num2 = 2;
  signed short int num3 = 3;
  signed long int num4 = 4;
  signed long long int num5 = 5;

  cout << sizeof(num1);
  cout << sizeof(num2);
  cout << sizeof(num3);
  cout << sizeof(num4);
  cout << sizeof(num5);

  // int num1 = 1;
  // unsigned int num2 = 2;
  // unsigned short int num3 = 3;
  // unsigned long int num4 = 4;
  // unsigned long long int num5 = 5;

  return 0;
}