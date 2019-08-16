//Rock , scissors , paper
#include <iostream>
#include <stdlib.h>

int main() {

  // Live long and prosper
srand (time(NULL));

int computer = rand() % 3 + 1;

int user = 0;
  
  std::cout << "====================\n";
std::cout << "rock paper scissors!\n";
std::cout << "====================\n";

std::cout << "1) ✊\n";
std::cout << "2) ✋\n";
std::cout << "3) ✌️\n";

std::cout << "shoot! ";
  
  std::cin >>user;
  
  if(computer==1){
    if(user==3)std::cout<<"winner is computer\n";
    else std::cout<<"winner is user\n";
  }
  else if(computer==2){
    if(user==1)std::cout<<"winner is computer\n";
    else std::cout<<"winner is user\n";
  }
    else {
    if(user==2)std::cout<<"winner is computer\n";
    else std::cout<<"winner is user\n";
  }
  
}
