#include <iostream>

int main() {
  int x, y[10], j, e;
  std::cout << "num" << "  num of digit";
  std::cin >> x >> j;

  for (int i = 0; i <= j; i++) {
    y[1] = x % 10;
    x /= 10;
  }

  for (int i = 0; i <= j / 2; i++) {
    if (y[i] != y[j]) {
      std::cout << " NOT A PALANDROM  ";
      break;
    } else {
      e = 1;
    }
  }

  if (e == 1) {
    std::cout << "  IS A PALANDROM";
  }

  return 0;
}
