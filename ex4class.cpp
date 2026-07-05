#include <iostream>
#include <string>

class Car {
private:
  std::string Make;
  std::string Model;
  int Year;
  int Speed;

public:
  Car(std::string make, std::string model, int year, int speed) {
    Make = make;
    Model = model;
    Year = year;
    Speed = speed;
  }

  void display() {
    std::cout << "Make: " << Make << std::endl;
    std::cout << "Model: " << Model << std::endl;
    std::cout << "Year: " << Year << std::endl;
    std::cout << "Speed: " << Speed << std::endl;
  }

  void accelerate(int inc) {
    Speed += inc;
    std::cout << "accelerate by: " << Speed << std::endl;
  }

  void brake(int dec) {
    if (Speed <= 0) {
      std::cout << "stoped!";
    } else {
      Speed -= dec;
      std::cout << " speed reduction: " << Speed << std::endl;
    }
  }
};

int main() {
  Car c1 = Car("toyota", "hylux", 2019, 50);

  c1.accelerate(20);
  c1.display();

  return 0;
}
