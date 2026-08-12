#include <fstream>
#include <ios>

int main() {
  std::fstream out;
  out.open("country", std::ios::out);
  out << "Nepal\n";
  out << "Hitlar\n";
  out.close();
  out.open("Capital", std::ios::out);
  out << "Kathmandu\n";
  out << "Adolf\n";
  out.close();
  return 0;
}
