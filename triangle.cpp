#include <cmath>
#include <iostream>

int main() {
  double a, b, c, s, area;
  // float is not used because its not precise
  std::cout << "enter sides of triangle";
  std::cin >> a >> b >> c;
  s = (a + b + c) / 2.0;
  area = std::sqrt(s * (s - a) * (s - b) * (s - c));

  std::cout << "the area of triangle is " << area << std::endl;

  return 0;
}
