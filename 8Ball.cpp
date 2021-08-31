#include <iostream>
#include <cstdlib>

int main() {

  std::cout << "Ball says \n\n";

  srand(time(NULL));

  int choice = std::rand() % 10;

  switch(choice) {
    case 0:
      std::cout << "Yes\n";
      break;
    case 1:
      std::cout << "Sometimes\n";
      break;
    case 2:
      std::cout << "Hopefully\n";
      break;
    case 3:
      std::cout << "Maybe\n";
      break;
    case 4:
      std::cout << "Sure\n";
      break;
    case 5:
      std::cout << "Not at all\n";
      break;
    case 6:
      std::cout << "Absolutely\n";
      break;
    case 7:
      std::cout << "Never\n";
      break;
    case 8:
      std::cout << "Everytime\n";
      break;
    case 9:
      std::cout << "Nowhere\n";
      break;
    default:
      std::cout << "Not sure\n";
      break;

  }

  return 0;

}