#include <iostream>
#include <string>

class mobile {
private:
  std::string Brand;
  std::string Model;
  int Price;
  int Batterylife;

public:
  mobile() { // this shit
    Brand = '\0';
    Model = '\0';

    Price = 0;
    Batterylife = 0;
  }

  mobile(std::string brand, std::string model, int price, int batteryLife) {
    Brand = brand;
    Model = model;
    Price = price;
    Batterylife = batteryLife;
  }
  // check phones affordibility??
  // checking its pricing??
  // on the basis of given budget by client??

  void check(int maxMoney) {
    if (maxMoney == Price) {
      std::cout << "Exactly equal to budget!";
    } else if (maxMoney > Price) {
      std::cout << "Affordable!";
    } else {
      std::cout << "Not Affordable";
    }
  }
};

int main() {
  mobile obj1 = mobile("sahf", "bdsh", 23456, 490);

  int x;
  std::cout << "Enter integre!";
  std::cin >> x;

  obj1.check(x);
}
