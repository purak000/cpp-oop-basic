
#include <iostream>
class A;

class B {
private:
  int value1;

public:
  B(int a) { value1 = a; }

  void display() { std::cout << value1; }

  friend void exch(B &, A &);
};

class A {
private:
  int value2;

public:
  A(int a) { value2 = a; }
  void display() { std::cout << value2; }

  friend void exch(B &, A &);
};

void exch(B &x, A &y) {
  int temp = x.value1;
  x.value1 = y.value2;
  y.value2 = temp;
}

int main() {
  A objA = A(49);
  B objB = B(30);

  exch(objB, objA);
  objA.display();
  objB.display();
  return 0;
}
