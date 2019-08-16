#include <iostream>

// Define is_palindrome() here:
bool is_palindrome(std::string  text) 
{
  int size = text.size();
  int ts = (int)size/2;
  
  for(int i=0; i<ts;i++)
  {
    if(text[i]!=text[size-1-i]) return false;
  }
  
  return true;
}

int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
}
