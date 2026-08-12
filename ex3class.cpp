#include <iostream>
#include <string>

class Employee {
private:
  std::string Name;
  std::string Company;
  int Salary;

public:
  void Data(std::string name, std::string company, int salary) {
    Name = name;
    Company = company;
    Salary = salary;
  }

  void Display() {
    std::cout << "name: " << Name << std::endl;
    std::cout << "company: " << Company << std::endl;
    std::cout << "salary: " << Salary << std::endl;
  }
};

int main() {
  Employee e;
  e.Data("josh", "hell", 000);
  e.Display();
}
