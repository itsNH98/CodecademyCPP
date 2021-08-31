#include <iostream>
#include <vector>

int main() {

  std::vector<int> vector = {2,4,3,6,1,9};
  int even = 0;
  int odd = 1;
  for (int i=0; i< vector.size(); i++) {
    if (vector[i] % 2 == 0) {
      even = even + vector[i];
    }
    if (vector[i] % 2 != 0) {
      odd = odd * vector[i];
    }  
  }
  std::cout << even << "\n";
  std::cout << odd << "\n";
}