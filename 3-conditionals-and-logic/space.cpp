#include <iostream>
#include <string>

int main() {
  
  double relative_gravity;
  int planet;
  double weight;
  //string  planet_name;
  
  std::cout << "Enter the planet number:\n";
  std::cin >> planet;
  std::cout << "Enter your weight:\n";
  std::cin >> weight;
  
  switch(planet){
    case 1:
    relative_gravity = 0.78;
    //planet_name = "Venus";
  
      break;
      	
case 2://planet_name = "Mars";	
  relative_gravity = 0.39;
      break;
case 3:	//planet_name = "Jupiter";	
  relative_gravity = 2.65;
      break;
case 4://planet_name = "Saturn";	
  relative_gravity = 1.17;
      break;
case 5:	//planet_name = "Uranus";	
  relative_gravity = 1.05;
      break;
case 6:	//planet_name = "Neptune";	
  relative_gravity = 1.23;
      break;
  
      }
  
  weight = weight*relative_gravity;
  std::cout << "your weight in "<<planet<<" is "<< weight<<"\n";
  
  
  
  
}
