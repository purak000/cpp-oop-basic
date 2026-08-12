#include <iostream>
#include <string>

class Student {
  // calss is private by defult,
  // you must make it public to access
public:
  std::string Name;
  std::string College;
  int Age;

  // initialize object by constuctong it;
  // lets create a object as student;

  Student(std::string name, std::string college, int age) {
    Name = name;
    College = college;
    Age = age;
  }

  // summery: class is a blueprint where we can create a object by using
  // constructor function and object only can be accesed if class and object are
  // public

  // lets create a function to call out the object student

  void Intro() {
    std::cout << "name :" << Name << std::endl;
    std::cout << "name :" << Name << std::endl;
    std::cout << "age :" << Age << std::endl;
    std::cout << std::endl;
  }
};

int main() {

  Student s1 = Student("josh", "hellhole", 21);
  // lest call the function;
  s1.Intro();

  Student s2 = Student("James", "hellhole", 20);
  // lest call the function;
  s2.Intro();

  return 0;
}
