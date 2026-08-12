#include <fstream>
#include <ios>
#include <iostream>

int main() {
  int N = 40;
  char line[N];
  std::ifstream in;
  in.open("country", std::ios::in);
  std::cout << "\n Content of file:";
  while (in) {
    in.getline(line, N);
    std::cout << line;
  }

  in.close();
  in.open("Capital");
  std::cout << "\n Content of capital";
  while (in) {
    in.getline(line, N);
    std::cout << line;
  }

  in.close();
  return 0;
}
