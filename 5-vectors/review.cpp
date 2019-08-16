#include<iostream>
#include<vector>

int main()
{
  int sum=0;
  int product = 1;
  int thisnumber;
  std::vector<int> vector={2, 4, 3, 6, 1, 9};
  for(int i =0; i<vector.size();i++)
  {
    thisnumber = vector[i];
    if(thisnumber%2 == 0)sum+=thisnumber;
    else product*=thisnumber;
  }
  
  std::cout<<"Sum of even numbers is "<<sum<<"\n";
	std::cout<<"Product of odd numbers is "<<product<<"\n";
  
}
