#include "headers/numbers.h"

long Numbers::reverse_number(long number) {
  long reverse = 0;

  while (number > 0) {
    int last_digit = number % 10;
    reverse = (reverse * 10) + last_digit;
    number = number / 10;
  }

  return reverse;
}