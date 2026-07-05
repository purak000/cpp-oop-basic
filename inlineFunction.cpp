#include <iostream>

void square(int);

int main() {
  square(3);
  square(4);

  return 0;
}
inline void square(int i) {
  std::cout << i * i << std::endl;
} // thsi is done if our function is small it bring the function in the main
  // function
// the down side of this is it takes more memory
