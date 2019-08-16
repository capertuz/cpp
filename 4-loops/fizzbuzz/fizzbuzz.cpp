#include <iostream>

int main() {

  bool printed;
  // Brain explodes here:
  for(int i = 1; i<=100;i++)
  {
    printed = false;
    if(i%3==0)  {std::cout << "Fizz";printed = true;}
    if(i%5==0)  {std::cout << "Buzz";printed = true;}
    if(!printed) std::cout << i;
    std::cout << "\n";
  }

}
