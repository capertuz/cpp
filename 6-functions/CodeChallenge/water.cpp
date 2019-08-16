#include <iostream>

// Define needs_water() here:
std::string needs_water(int days, bool  is_succulent) 
{
  std::string str;
if(!is_succulent && days> 3) str= "Time to water the plant.";
else if (is_succulent  && days <= 12) str= "Don't water the plant!";
else if (is_succulent && days >= 13) str= "Go ahead and give the plant a little water.";
else str= "Don't water the plant!";
  return str;
}

int main() {
  
  std::cout << needs_water(10, false) << "\n";
  
}
