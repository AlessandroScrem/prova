#include <iostream>

#define MAX

#ifndef NDEBUG
#define PRINTHELLO() std::cout << "Hello, modified debug!\n";
#else
#define PRINTHELLO() std::cout << "Hello, release!\n";
#endif


int main(int, char **) {
  PRINTHELLO(); //
}
