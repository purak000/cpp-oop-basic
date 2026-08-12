#include <iostream>
using namespace std;

class Euro {
  double euro;

public:
  Euro(double e) { euro = e; }

  void toUSD(double rate) {
    cout << euro << " EUR = " << euro * rate << " USD\n";
  }
};

class USD {
  double usd;

public:
  USD(double u) { usd = u; }

  void toEuro(double rate) {
    cout << usd << " USD = " << usd / rate << " EUR\n";
  }
};

int main() {
  double rate;

  cout << "Current exchange rate (1 EUR = ? USD): ";
  cin >> rate;

  Euro e(100);
  USD u(100);

  e.toUSD(rate);
  u.toEuro(rate);

  return 0;
}
