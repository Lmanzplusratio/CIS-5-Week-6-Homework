#include <iostream>
#include <string>

// Isaiah Salvatierra - Week 06
// CIS 05 - Loops

using std::cout;
using std::cin;
using std::string;

int main() {

int n = 0;
 
do {
 cout << "Hello! Here is the main menu, to proceed, select from one of the numbers: 1, 2, 3 \n"; cin >> n;
 
 if ( n == 1) {
  cout << " Hello User! \n"; 
 }
 else if ( n == 2 ) {
  cout << "Countdown: \n";
  
  for (int i = 10; i >= 1; --i) {
  cout << i << "\n";
   }
 }
 else if ( n == 3 ) {
  break;
 }
} while (n < 1 || n > 3);
 cout << "The Menu is closed \n";
 return 0;
}