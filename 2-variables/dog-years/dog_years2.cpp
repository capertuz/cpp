#include <iostream>

int main() {
  
  int dog_age = 3;//This is my dog age
  int human_years= 0;
  int early_years= 21;//The first two years of a dog’s life count as 21 human years
  int later_years= ((dog_age-2) * 4);//Each following year counts as 4 human years
  //std::cout<<"Enter the number of dog years:\n";
  //std::cin>>dogYears;
  human_years = later_years + early_years;
  std::cout<<"My name is pluto! Ruff ruff, I am "<<human_years<<" years old in human years.\n";
}
