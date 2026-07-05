#include <iostream>
#include <string>

class Book {
private:
  std::string Title;
  std::string AuthorsName;
  int Price;

public:
  Book(std::string title, std::string authorsName, int price) {
    Title = title;
    AuthorsName = authorsName;
    Price = price;
  }

  void Display() {
    std::cout << "______________________________________________" << std::endl;
    std::cout << " Displaying books data " << std::endl;
    std::cout << "______________________________________________" << std::endl;

    std::cout << "Title: " << Title << std::endl;
    std::cout << std::endl;

    std::cout << " Authors Name: " << AuthorsName << std::endl;
    std::cout << std::endl;

    std::cout << "Price: " << Price << std::endl;
    std::cout << "______________________________________________" << std::endl;
  }
};

int main() {
  Book b1 = Book("Godkiller", "Josh", 450);
  b1.Display();

  return 0;
}
