#include <iostream>
#include <vector>

int main() {
  
  std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};
    
  // Add more 
  grocery.push_back("carrots");
    grocery.push_back("spinach");
    grocery.push_back("strawberries");
    grocery.push_back("banana");
  
   std::cout<<grocery.size()<<"\n";
  
  
  
  
  
}
