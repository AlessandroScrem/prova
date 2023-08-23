#include <iostream>

#define MAX

#ifndef NDEBUG
#define PRINTHELLO() std::cout << "Hello, debug!\n";
#else
#define PRINTHELLO() std::cout << "Hello, release!\n";
#endif


int main(int, char **) {
  PRINTHELLO(); //
}
