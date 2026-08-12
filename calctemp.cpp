#include <iostream>
template <class T> class Calculator {
  T num1, num2;

public:
  Calculator(T n1, T n2) {
    num1 = n1;
    num2 = n2;
  }
  void displayResult() {

    std::cout << "Numbers: " << num1 << "and" << num2 "." << std::endl;
    std::cout << num1 << "+" << num2 << "=" << add() << std::endl;
  }
}
