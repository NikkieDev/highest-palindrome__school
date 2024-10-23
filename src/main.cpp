#include <iostream>
#include "headers/palindrome.h"

int main() {
  long biggest = 9999999;
  long limit = 1000000;
  
  const long palindrome = Palindrome::get_largest(biggest, limit);

  if (palindrome < 0) {
    std::cout << "An error has occured, no palindrome could be found" << std::endl;
    return -1;
  }

  std::cout << "Largest palindrome: " << palindrome << std::endl;
  return 0;
}
