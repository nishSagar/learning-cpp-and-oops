#include <iostream>

int main()
{
  int a;
  std::cout << "Enter a number: ";
  std::cin >> a;

  if (a >= 18)
  {
    std::cout << "You are adult";
  }
  else
  {
    std::cout << "You are not an adult";
  }
  return 0;
}
