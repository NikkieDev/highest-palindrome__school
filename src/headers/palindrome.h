#ifndef PALINDROME_H
#define PALINDROME_H

class Palindrome {
  private:
    // check if number is palindrome
    static bool is(long n);
  public:
    // find longest palindrome between all products of 2 numbers
    static long get_largest(int b, int l);
};

#endif