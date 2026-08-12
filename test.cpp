#include <iostream>

int main() {
  std::cout << "enter age: ";
  int age;

  std::cin >> age;

  if (age >= 18) {
    std::cout << " you can enter! \n";

  } else {
    std::cout << " you cant enter! \n";
  }

  return 0;
}
