// CSC 134
// M1T2
// Jolena
// 2/21/24

#include <iostream>
#include <cstdlib> // for rand ()
using namespace std;

int main() {
     int Num_grade;
    cout << "Enter number grade below" << endl;

    cin >> Num_grade;
    if ( Num_grade >= 90 ) {
      cout << "You Got an A Congradulations you made it into the advanced program" << endl;
    }
    if ( Num_grade >= 80 && Num_grade <= 89 ) {
        cout << "You Got a B Good job" << endl;
    }
    if ( Num_grade >= 70 && Num_grade <= 79 ) {
        cout << "You Got a C You passed" << endl;
    }
    if ( Num_grade >= 60 && Num_grade <= 69 ) {
        cout << "You made a D, try again" << endl;
    }
    if ( Num_grade>= 50 && Num_grade <= 59 ) {
        cout << "You made an F you failed, try again" << endl;
    }



  /* roll = die1 + die2;

    // get the results
    std::cout << "Roll " << die1 << " and " << die2 << " totals: " << roll << endl;
    if (roll == 7 || roll == 11) {
        cout << "You win!" << endl;
    }
    else if (roll == 2 || roll == 3 || roll == 12) {
        cout << "You loose.." << endl;
    }
    else{
        cout << "Your point is: " << roll << endl;
        cout << "TODO: roll the point" << endl;
    }

  */
   return 0;
}