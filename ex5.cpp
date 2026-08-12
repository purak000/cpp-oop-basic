#include <iostream>
#include <string>

class Student {
private:
  int Rollnum;
  std::string Name;

public:
  Student() {}
  Student(int rol, std::string nam) {
    Rollnum = rol;
    Name = nam;
  }

  virtual void get() {
    std::cout << "Enter Name & Rollnum: \n";
    std::cin >> Name >> Rollnum;
  }

  virtual void display() {
    std::cout << "Name: " << Name << "Rollnum: " << Rollnum;
  }
};

class Exam : public Student {
protected:
  int math, scie, phy, chem, his, phi;

public:
  Exam() {}
  Exam(int m, int s, int p, int c, int h, int pi) {
    math = m;
    scie = s;
    phy = p;
    chem = c;
    his = h;
    phi = pi;
  }

  void get() {
    Student::get();
    std::cout << "Enter MAth, Science, Physics, Chem, History, Philoshopy: \n";
    std::cin >> math >> scie >> phy >> chem >> his >> phi;
  }

  void display() {
    Student::display();
    std::cout << "math: " << math << "\nScience: " << scie
              << "\n Physics: " << phy << "\n Chem: " << chem
              << "\n History: " << "\n Philoshopy: " << phi;
  }
};

class Result : public Exam {
private:
  int total, percentage, average;

public:
  void get() { Exam::get(); }
  void calculate() {
    total = math + scie + phy + chem + his + phi;
    average = total / 6;
    percentage = total / 6.0f;
  }
  void display() {
    std::cout << "total: " << total << "\n percentage: " << percentage
              << "\n average: " << average << std::endl;
  }
};

int main() {
  Result r;

  r.get();
  r.calculate();
  r.display();

  return 0;
}
