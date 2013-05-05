#include <iostream>

using namespace std;
int main(void) {
 int x = 42;
 char c = x;
 char c2 = '?';
 int x2 = c2;
 int x3 = 100;
 double d = x3;

 int x4 = 560353;
 char c3 = x4;
 double d2 = 3.142;
 int x5 = d2;
 char c4 = d2;

 cout << "Number :" << x << endl;
 cout << "Char :" << c << endl;
 cout << "Char :" << c2 << endl;
 cout << "Number :" << x2 << endl;
 cout << "Number :" << x3 << endl;
 cout << "Double :" << d << endl;

 cout << "Number :" << x4 << endl;
 cout << "Char :" << c3 << endl;
 cout << "Double :" << d2 << endl;
 cout << "Number :" << x5 << endl;
 cout << "Char :" << c4 << endl;
 return 0;
}