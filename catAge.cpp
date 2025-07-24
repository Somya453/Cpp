#include <iostream>

int main() {
  // Write code here
  int catAge, human;
  std::cout << "Enter your cat's age:" << std::endl;
  std::cin >> catAge;

  human=(catAge-2)*4+24;
  std::cout << "Human age is" << " = " << (catAge-2)*4+24 << std::endl;

}