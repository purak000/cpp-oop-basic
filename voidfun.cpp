#include <iostream>

void f(int a = 10) { std::cout << a << std::endl; }

void repete(char c = '*', int x = 5);

int main() {
  repete();
  return 0;
}

void repete(char c, int x) {
  for (int i = 0; i < x; i++) {
    std::cout << c << std::endl;
  }
}
