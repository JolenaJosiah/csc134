// if statement example2
// standard header


// compiler directives
// (required for the program to run)
#include <iostream>
using namespace std;

// beginning of the main() method
int main() {
  
  // this program will ask a question and respond to it.
  // You should run it, and test it by typing in different values.
  // Example test values: 1, 2, 3, banana (try all of them)

  // declare the variable we need
  int choice; 

  // ask the question
  cout << "Do you choose Iphone 15 or the Android 12 ?" << endl;
  cout << "Type 15 or 12: "; 
  cin >> choice;

  // using if, make a decision based on the user's choice

  if (15 == choice) {
    cout << "type 1 for rose gold type 2 for midnight blue: ";
    cin >> choice; 
  	cout << "You chose Iphone 15" << endl;
  
  if ( 1 == choice) {
    cout << "You chose Rose gold iphone 15" << endl; 
   }
    if (choice == 2){
    cout << "You chose Midnight blue android" << endl;
  }
  }
  else if (12 == choice) {

    
  	cout << "You chose Android 12" << endl;

  }
  else {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }

  // finish up
  cout << "Thanks for playing!" << endl; // this runs no matter what they choose
  return 0; // exit without error

} // end of the main() method