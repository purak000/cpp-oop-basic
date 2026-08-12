#include <iostream>
#include <string>

class Publication {
private:
  std::string Title;
  float Price;

public:
  Publication(std::string ti, float pr) {
    Title = ti;
    Price = pr;
  }
  Publication() {
    Title = "";
    Price = 0.0;
  }
  void get() {
    std::cout << "Enter Title and Price: ";
    std::cin >> Title >> Price;
  }

  virtual void display() {
    std::cout << "Price: " << Price << "Title: " << Title;
  }

  virtual ~Publication() {}
};

class Book : public Publication {
private:
  int Page;

public:
  void get() {
    Publication::get();
    std::cout << "\n Enter Page :";
    std::cin >> Page;
  }
  void display() {
    Publication::display();
    std::cout << "Page" << Page;
  }
};

class Tape : public Publication {
private:
  float Time;

public:
  void get() {
    Publication::display();
    std::cout << "\n Enter Time: ";
    std::cin >> Time;
  }
  void display() {
    Publication::get();
    std::cout << "\n Time :" << Time;
  }
};

int main() {
  Publication *p[10];
  Book *b;
  Tape *t;
  int n = 0;
  char choice, again;

  do {
    std::cout << "\n Enter for Book B or Tape T ";

    std::cin >> choice;

    if (choice == 'B') {
      b = new Book;
      b->get();
      p[n] = b;
      n++;
    } else {
      t = new Tape;
      t->get();
      p[n] = t;
      n++;
    }
    std::cout << "Continue? (y/n): ";
    std::cin >> again;

  } while (choice == 'y');

  for (int i = 0; i < n; i++) {
    p[i]->display();
    std::cout << '\n';
  }

  for (int i = 0; i < n; i++) {
    delete p[i];
  }

  return 0;
}
