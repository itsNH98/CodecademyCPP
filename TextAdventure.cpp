#include <iostream>

int main() {

  int answer;

  std::cout << "I was at the house\n";
  std::cout << "What is next mate? 1, 2 or 3: \n";
  std::cin >> answer;

  if (answer == 1) {
    std::cout << "Nothing happened\n";
  }
  else if (answer == 2) {
    std::cout << "Something happened\n";
  }
  else if (answer == 3) {
    std::cout << "Maybe something happened\n";
  }
  else {
    std::cout << "Wrong input\n";
  }

  std::cout << "End of the story\n";

}