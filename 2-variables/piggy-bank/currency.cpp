#include <iostream>

int main() {

  float pesos;// for Pesos
	float reais;// for Reais
	float soles;// for Soles
  float dollars;// for Soles
  
  std::cout<<"Enter number of Colombian Pesos: \n";
  std::cin>>pesos;
  std::cout<<"Enter number of Brazillian Reais: \n";
  std::cin>>reais;
  std::cout<<"Enter number of Peruvian Soles: \n";
  std::cin>>soles;
  
  //Exchange rates cop 0.00029, reais 0.25, soles 0.29
  
  dollars = (0.00029 * pesos) + (0.25 * reais) + ( 0.29 * soles);
  std::cout<<"US Dollars = $"<<dollars<<"\n";
  
  return 0;
}
