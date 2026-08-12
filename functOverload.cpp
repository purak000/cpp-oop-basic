#include <iostream>

int plus(int x, int y) { return x + y; } // function

double plus(double x, double y) { return x + y; } // function

int main() {
  int i = plus(1, 2);
  double d = plus(3.4, 4.2);

  std::cout << i << std::endl << d;

  return 0;
}
