/*
// CSC 134
// M2T2 - Apple Sales
// Jolena
// 1/31/24
*/
#include <iomanip>
 #include <iostream>
using namespace std;



int main() 
{
    // Declare varibles
    string name;
    int apples;
    double price_each;
    double total;

    // Ask user for information
    cout << "hi, what's your name?";
    cin >> name;
    cout << "Welcome to our orchard," << name << endl;
    cout << "how many apples do you want?";
    cin >> apples;
    cout << "how much are they each?";
    cin >> price_each;

    // Do calculations
    total = apples * price_each;

    // Print the output
    // print number of apples, price each
    cout << "we have " << apples << " apples for sale." << endl;


    // NOTE: math opperations are + - * /
   ;

 // #include <iomanip>
    cout << fixed << setprecision (2);
    // Print the output
    cout << "WElcome to the " << name << " Apple Orchard" << endl;
    cout << "We have " << apples << " apples for sale." << endl;
    cout << "at a cost of $" << price_each << " each." << endl;
    cout << "For a total cost of $" << total << endl;

    return 0;
}
