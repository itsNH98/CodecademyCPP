#include <iostream>

int main() {
  double pesos;
  double reais;
  double soles;
  double dollars;
  
  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;

  std::cout << "Enter number of Reais: ";
  std::cin >> reais;

  std::cout << "Enter number of Soles: ";
  std::cin >> soles;

  double conversion_rate1 = 0.00032;
  double conversion_rate2 = 0.27;
  double conversion_rate3 = 0.3;

  dollars = (conversion_rate1 * pesos) + (conversion_rate2 * reais) + (conversion_rate3 * soles);

  std::cout << "US Dollars = $ " << dollars << "\n";

}