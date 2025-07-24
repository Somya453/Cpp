#include <iostream>
// including namespace.std;

int main() {
  // Write code here
  int month1, month2, MoM;
  std::cout << "Enter month1: "<<std::endl;
   std::cin >> month1;
  std::cout << "Enter month2: "<<std::endl;
  std::cin >> month2;

   MoM = (month2-month1)/(month1)*100;
   std::cout << MoM << " = " << (month2-month1)/(month1)*100 << std::endl;

}
