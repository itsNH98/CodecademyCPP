#include <iostream>
#include <vector>
#include <string>
 
int main() {
 
  // Whale, whale, whale.
  // What have we got here?
std::string input = "turpentine and turtle";

std::vector<char> vowels = {'a','e','i','o','u'};
std::vector<char> results;

for (int i=0; i< input.size(); i++) {
  for (int j=0; j<vowels.size(); j++) {
    if (input[i] == vowels[j]) {
      results.push_back(vowels[j]);
    }
    if (input[i] == 'e' || input[i] == 'u') {
      results.push_back(input[i]);
    }
  }
}

for (int h=0; h< results.size(); h++) {
  std::cout << results[h];
}
}