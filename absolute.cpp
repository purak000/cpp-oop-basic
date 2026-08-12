#include <iostream>

int absolute(int x) {
  if (x >= 0) {
    return x;
  } else {
    return -x;
  }
}

int main() {
  int x;
  std::cout << "enter x";
  std::cin >> x;

  std::cout << "absolute value is " << absolute(x) << std::endl;

  return 0;
}
