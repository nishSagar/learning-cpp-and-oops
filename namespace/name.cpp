#include <iostream>

namespace first {
  int x = 345;

}

namespace second {
  int x = 445;

}

int main() {
  // int x = 5;
  using namespace first;
  // using namespace std; BAD PRACTISE
  // or we can use
  // using std::cout or std::string

  // std::cout << x;

  // std::cout << first::x;

  std::cout << x;



  return 0;
}