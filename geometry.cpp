#include <cmath>
#include <iostream>
#include <numbers>

int main() {

  // creating a geometical calc;
  // using switch

  std::cout << "enter your choice" << std::endl;
  std::cout << " t for triangle \n c for circle \n r for rectangle : ";
  char choice;
  std::cin >> choice;
  double area;

  switch (choice) {
  case 't': { // to limit error due to decleration of double in switch;
    double a, b, c, s;
    // float is not used because its not precise
    std::cout << "enter sides of triangle: ";
    std::cin >> a >> b >> c;
    s = (a + b + c) / 2.0;
    area = std::sqrt(s * (s - a) * (s - b) * (s - c));

    std::cout << "the area of triangle is " << area << std::endl;
    break;
  }

  case 'c': {
    double r;
    // float is not used because its not precise
    std::cout << "enter radius: ";
    std::cin >> r;

    area = std::numbers::pi * r * r;
    std::cout << "area of circle is " << area << std::endl;
    break;
  }

  case 'r': { // the curly bracket creates a limited scopr where double a,b can
              // work.
    double a, b;
    std::cout << "enter length and bredth: ";
    std::cin >> a >> b;

    area = a * b;

    std::cout << "area of a rectangle is " << area << std::endl;
    break;
  }
  }
  return 0;
}
