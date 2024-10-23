#include "headers/palindrome.h"
#include "headers/numbers.h"

bool Palindrome::is(long number) {
  return number == Numbers::reverse_number(number); 
};

long Palindrome::get_largest(int biggest, int limit) {
  for (int i = biggest; i >= limit; i--) {
    for (int j = i; j >= limit; j--) {
      long computed = i * j;

      if (is(computed)) {
        return computed;
      }
    }
  }

  return -1;
};