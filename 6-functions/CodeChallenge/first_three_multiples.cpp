#include <iostream>
#include <vector>

// Define first_three_multiples() here:
std::vector<int> first_three_multiples(int num)
{
  std::vector<int> v;
  v.push_back(num);
  v.push_back(num*2);
  v.push_back(num*3);
  
  return v;
}

int main() {
  
  for (int element : first_three_multiples(8)) {
    std::cout << element << "\n";
  }
  
}
