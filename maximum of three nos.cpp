#include <iostream>
using namespace std;
 
int main() {
   int a = 11;
   int b = 55;
   int c = 23;
 
   int max;
 
   if (a>b && a>c) {
      max = a;
   } else if (b>c) {
      max = b;
   } else {
      max = c;
   }
    
   cout << max << endl;
}
