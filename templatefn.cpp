// overloading function template: the function can also be overloaded by
// different numbers of parameter or this type. overloaded templete function
#include <iostream>

template <class T>

void print(T data) {
  std::cout << data << std::endl;
}
template <class T> void print(T data, int n) {
  for (int i = 0; i < n; i++) {
    std::cout << data;
  }
}

int main() {
  print('$');
  print(55);
  print(12.34);
  print("Hello", 4);
  return 0;
}
