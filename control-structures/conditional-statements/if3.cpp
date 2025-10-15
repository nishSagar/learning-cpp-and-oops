#include <iostream>

int main() {

  int money;
  std::cout << "Enter the amount of money you have: ";
  std::cin >> money;

  if (money >= 100000) {
    std::cout << "you can buy macbook";
  } else if (money >= 50000) {
    std::cout << "you can buy iphone";
  } else if (money >= 10000) {
    std::cout << "you can buy iwatch";
  } else if (money >= 1000) {
    std::cout << "you can buy apple juice";
  } else {
    std::cout << "go earn some money man";
  }

  return 0;
}