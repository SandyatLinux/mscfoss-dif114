#include <iostream>

using namespace std;

void f1(void) {
  cout << "In f1, that returns nothing." << endl;
}

int f2(void) {
  cout << "In f2, that returns an int." << endl;
  return 42;
}

int main(void) {
  f1();
  int x = f2();
  cout << "I got " << x << "from f2()" << endl;
}