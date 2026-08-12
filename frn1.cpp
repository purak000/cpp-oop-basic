#include <iostream>

class Bob {
private:
  int Salary, Id, Age;
  std::string Name;

public:
  Bob(int salary, int id, int age, std::string name) {
    Salary = salary;
    Id = id;
    Age = age;
    Name = name;
  }

  void display() {
    std::cout << "Salary: " << Salary << "\n Id: " << Id << "\n Age: " << Age
              << "\n Name: " << Name;
  }
  friend promote() {}
};
