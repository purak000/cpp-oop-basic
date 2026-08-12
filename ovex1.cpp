#include <iostream>

class A {
private:
  int value;

public:
  A() { value = 0; }
  A(int va) { value = va; }

  void display() { std::cout << "Value: " << value; }
  A operator+(const A &obj2) {
    A temp;
    temp.value = value - obj2.value;
    return temp;
  }
};

int main() {
  A obj1 = A(10);
  A obj2 = A(20);

  A obj3;

  obj3 = obj1 + obj2;
  obj3.display();

  return 0;
}
