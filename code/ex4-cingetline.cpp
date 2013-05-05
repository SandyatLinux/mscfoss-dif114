#include <iostream>

using namespace std;
int main(void) {
   string name;
   cout << "Enter a sentence with whitespaces : " << endl;
   getline (cin, name);
   cout << "Now we can see the sentence correctly : " << name << "\n";
   return 0;
}