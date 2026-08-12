#include <cmath>
#include <iostream>

class Rectangle {
private:
  float xco, yco;

public:
  Rectangle() { xco = yco = 0.0; }
  Rectangle(float x, float y) {
    xco = x;
    yco = y;
  }

  void display() { std::cout << xco << "\t" << yco; }
};

class Polar {
public:
  float radius, angle;

  Polar() { radius = angle = 0.0; }
  Polar(float r, float a) {
    radius = r;
    angle = a;
  }

  void display() { std::cout << radius << "\t" << angle; }

  operator Rectangle() {
    float x = radius * cos(angle);
    float y = radius * sin(angle);
    return Rectangle(x, y);
  }
};

int main() {
  Rectangle robj;
  Polar pobj = Polar(10.0, 0.78);
  robj = pobj;
  robj.display();
  pobj.display();
  return 0;
}
