#include <iostream>
#include <vector>
#include "ufo_functions.hpp"

int main() {

  greet();
	std::string codeword="codecademy";
	std::string answer=  "__________";
  int misses  =0;
  std::vector<char> incorrect;
  bool guess;
  char  letter;
  
  
  while(answer!=codeword && misses <7)
  {
    guess = false;
    display_misses(misses); 
    display_status(incorrect , answer);
   	std::cout<<"Please enter your guess: \n";
  	std::cin>>letter;
    for(int i=0; i<codeword.size(); i++)
    {
      if(codeword[i] == letter)
      { answer[i] = letter; guess = true;}

    }
    if(guess==true)
    {
      std::cout<<"Correct!\n";
    }
    else
    {
      std::cout<<"Incorrect! The tractor beam pulls the person in further.\n";
      incorrect.push_back(letter);
      misses++;
    }
    
    std::cout<<"\n";
   
    
  }
  display_misses(misses); 
  display_status(incorrect , answer);
  end_game( answer,  codeword);
}
