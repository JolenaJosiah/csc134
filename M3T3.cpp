// CSC 134
// M1T2
// Jolena
// 2/21/24

#include <iostream>
#include <cstdlib> // for rand ()
using namespace std;

int main() {
    std::cout << "welcome to the craps table" << endl;
    // set up variables
    int roll;
    int die1, die2;
    int seed;

    // roll the dice
    //cout << "What did you roll? ";
    //cin >> roll;
   die1 = (rand() % 6) + 1; // 1 to 6
   die2 = (rand() % 6) + 1;
   roll = die1 + die2;

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

    return 0;
}