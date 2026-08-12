#include <iostream>

template <class T> void display(T value) {
  std::cout << "\n Single Parametere: " << value;
}

template <class T>

void display(T value1, T value2) {
  std::cout << "\n Two parameter of same type: " << value1 << "\t" << value2;
}

template <class T1, class T2> void display(T1 value1, T2 value2) {
  std::cout << "\n Two peremeters of different types: " << value1 << "\t"
            << value2;
}

int main() {
  display(5);
  display(2, 4);
  display(9, 1.23);
  display("asm0", "assss");
  return 0;
}
