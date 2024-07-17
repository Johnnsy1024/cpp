#include <iostream>

#include "basicLan/headerFile/literal.h"

using namespace std;

int main(int argc, char** argv) {
  char s[] = "Hello World!";
  for (char* p = s; *p != '\0'; p++) {
    std::cout << *p << std::endl;
  }
  const char* sp[] = {"Hello", "World!"};
  return 0;
}
