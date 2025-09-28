#include <iostream>

int main() {
  // & (bitwise AND)
  // | (bitwise OR)
  // ^ (bitwise XOR)
  // ~ (bitwise NOT)
  // << (bitwise left-shift)
  // >> (bitwise right-shift)

  int x = 26;
  int y = 9;
  int z = x & y;

  // 0 0 0 1 1 0 1 0 = 26 in bits
  // 0 0 0 0 1 0 0 1 = 9 in bits
// ------------------------------ 
// & 0 0 0 0 1 0 0 0 = 8 "bitwise AND operator gives false even if there is one false valuse"

  // 0 0 0 1 1 0 1 0 = 26 in bits
  // 0 0 0 0 1 0 0 1 = 9 in bits
// ------------------------------ 
// | 0 0 0 1 1 0 1 1 = 27 "bitwise OR is the total opposite of bitwise AND"

  // 0 0 0 1 1 0 1 0 = 26 in bits
  // 0 0 0 0 1 0 0 1 = 9 in bits
// ------------------------------ 
// ^ 0 0 0 1 0 0 1 1 = 19 "if both the bits are same then bitwise XOR will give false"

  // z = ~x
  // ~x = -(x + 1)
  // ~x = -(26 + 1)
  // ~x = -27
  // ~ bitwise NOT converts "0 0 0 1 1 0 1 0"(26) into "1 1 1 0 0 1 0 1"(-27)

  // x = "0 0 0 1 1 0 1 0"(26)
  // x << 1 .means left shift the bits by one
  // so "0 0 0 1 1 0 1 0"(26) will be left shifted by one and it'll become "0 0 1 1 0 1 0 0"

  // x = "0 0 0 1 1 0 1 0"(26)
  // x >> 1 .means right shift the bits by one
  // so "0 0 0 1 1 0 1 0"(26) will be right shifted by one and it'll become "0 0 0 1 1 0 1"





  return 0;
}