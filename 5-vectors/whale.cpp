#include <iostream>
#include <vector>
#include <string>

int main() {

  // Whale, whale, whale.
  // What have we got here?
  
  std::string str= "turpentine and turtles";
  std::vector<char> vowels = {'a','e','i','o','u'};
   std::vector<char> result;
  
  for(int i= 0; i<str.size();i++)
  {
    
    for(int j= 0; j<vowels.size();j++)
  	{
    	if(str[i] == vowels[j])
      {
        if(str[i] == 'e' || str[i] == 'u')
        {
          result.push_back(str[i]);
          result.push_back(str[i]);
        }
        else result.push_back(str[i]);
      }
    
  	}
  }
  
  for(int j= 0; j<result.size();j++)
  	{
    	std::cout<<result[j];
  }
std::cout<<"\n";
}
