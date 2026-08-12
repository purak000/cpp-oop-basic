#include <iostream>
#include <string>

class Batsman {
private:
  std::string Name;
  int Run, Fours, Six, update;

public:
  void input() {
    std::cout << "Enter Player Name: " << std::endl;
    std::cin >> Name;
    std::cout << "______________________________________________" << std::endl;

    std::cout << "Enter Runs: " << std::endl;
    std::cin >> Run;
    std::cout << "______________________________________________" << std::endl;

    std::cout << "Enter fours: " << std::endl;
    std::cin >> Fours;
    std::cout << "______________________________________________" << std::endl;

    std::cout << "Enter Six: " << std::endl;
    std::cin >> Six;
  }

  void Update() {
    std::cout << "Run :" << Run << std::endl;
    std::cout << "Enter runs to add: " << std::endl;
    std::cin >> update;
    Run = Run + update;
    std::cout << "Run updated: " << Run << std::endl;

    std::cout << "______________________________________________" << std::endl;

    std::cout << "Enter no of fours to add: " << std::endl;
    std::cin >> update;
    Fours += update;
    std::cout << " no of fours: " << Fours << std::endl;

    std::cout << "______________________________________________" << std::endl;

    std::cout << "Enter no of six to add: " << std::endl;
    std::cin >> update;
    Six += update;
    std::cout << " updated Six is: " << Six << std::endl;
  }

  void Display() {
    std::cout << "Run: " << Run << std::endl;
    std::cout << "______________________________________________" << std::endl;

    std::cout << " no of fours: " << Fours << std::endl;

    std::cout << "______________________________________________" << std::endl;

    std::cout << " no of 6's: " << Six << std::endl;
  }
};

int main() {
  Batsman B;
  B.input();
  std::cout << "______________________________________________" << std::endl;
  B.Update();
  std::cout << "______________________________________________" << std::endl;

  B.Display();
  std::cout << "______________________________________________" << std::endl;

  return 0;
}
