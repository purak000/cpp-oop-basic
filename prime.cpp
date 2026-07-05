#include <cmath>
#include <iostream>

void prime(int x) {
  if (x <= 1) {
    std::cout << x << " is not prime";
    return;

  } else {
    for (int i = 2; i <= std::sqrt(x); i++) {
      if (x % i == 0) {
        std::cout << x << " is not prime";
        return;
      }
    }
  }
  std::cout << x << " is a prime";
}

int main() {
  int x;
  std::cout << "enter a number to check prime: ";
  std::cin >> x;
  prime(x);

  return 0;
}
