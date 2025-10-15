#include <iostream>
// nested if's
int main() {
  int a;
  std::cout << "enter age: ";
  std::cin >> a;
  if (a >= 18) {
    std::cout << "you are an adult! now enter the money you have: ";
    int b;
    std::cin >> b;
    if (b >= 1000) {
      std::cout << "which liquor you'd like to try? just type the number: \n";
      std::cout << "1.beer \n";
      std::cout << "2.burbon \n";
      std::cout << "3.gin \n";
      std::cout << "4.vodka \n";
      std::cout << "5.wine \n";
      int c;
      std::cin >> c;
      if (c == 1) {
        std::cout << "here! enjoy your beer sir (˶ᵔ ᵕ ᵔ˶) 🍺";
      }
      if (c == 2) {
        std::cout << "here! enjoy your burbon sir (˶ᵔ ᵕ ᵔ˶) 🍺";
      }
      if (c == 3) {
        std::cout << "here! enjoy your gin sir (˶ᵔ ᵕ ᵔ˶) 🍺";
      }
      if (c == 4) {
        std::cout << "here! enjoy your vodka sir (˶ᵔ ᵕ ᵔ˶) 🍺";
      }
      if (c == 5) {
        std::cout << "here! enjoy your wine sir (˶ᵔ ᵕ ᵔ˶) 🍺";
      }
      
    }

  } else {
    std::cout << "grow up bitch";
  }
  return 0;
}