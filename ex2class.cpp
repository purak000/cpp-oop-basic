#include <iostream>

class Small {
private:
  int data;

public:
  void set(int d) { data = d; }

  void show() { std::cout << "\n Data = " << data << std::endl; }
};

int main() {
  Small obj1, obj2;
  obj1.set(11);
  obj2.set(22);
  obj1.show();
  obj2.show();
  return 0;
}
