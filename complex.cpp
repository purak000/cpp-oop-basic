#include <iostream>
#include <string>

class Library {
private:
  std::string Book;
  int id;

public:
  Library() {}

  Library(std::string name, int Id) {
    Book = name;
    id = Id;
  }

  friend std::ostream &operator<<(std::ostream &os, const Library &s) {
    os << s.Book << " " << s.id;
    return os;
  }
};

int main() {
  Library s[3] = {

      Library("harry pottor", 12), Library("Anabel", 1), Library("evea", 12)

  };

  for (int i = 0; i < 3; i++) {
    std::cout << s[i] << std::endl;
  }

  return 0;
}
