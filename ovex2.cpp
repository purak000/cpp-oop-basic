#include <iostream>
#include <string>

class Acoount {
private:
  int Accountnum;
  int Balance;
  std::string AccountHolder;
  std::string AcoountType;

public:
  Acoount() {
    Accountnum = 0;
    Balance = 0;
    AccountHolder = AcoountType = "0";
  }
  Acoount(int aNum, int balance, std::string AcHolder, std::string AcType) {
    Accountnum = aNum;
    Balance = balance;
    AccountHolder = AcHolder;
    AcoountType = AcType;
  }

  void display() {
    std::cout << "Acoount Number: " << Accountnum << "\n Balance: " << Balance
              << "\n AccountHolder: " << AccountHolder
              << "\n AcoountType: " << AcoountType << std::endl;
  }
  void withdraw(int x) {
    Balance = Balance - x;
    std::cout << "Balance: " << Balance << std::endl;
    std::cout << "_____________________________________________________\n";
  }
  void Deposite(int y) {
    Balance = Balance + y;
    std::cout << "Balance: " << Balance << std::endl;

    std::cout << "_____________________________________________________\n";
  }
};

int main() {
  Acoount obj1 = Acoount(323244, 40000, "Josh", "Savings");
  obj1.withdraw(3000);
  obj1.Deposite(4000);
  obj1.display();

  return 0;
}
