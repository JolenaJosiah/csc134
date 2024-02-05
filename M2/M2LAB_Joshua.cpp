/*
// CSC 134
// M2T1 - Receipt
// Jolena
// 2/5/24
*/
#include <iostream>
 using namespace std;

 int main() {
    // Take 1 - just a rectangle
    // Declare variables
    double length, width, height;
    double volume;
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;
    double cost, charge, profit;



    // Ask for user input
   cout << "lengh? ";
    cin >> length; 
    cout << "Width? ";
    cin >> width;
    cout << "Height? ";
    cin >> height;



    // Do calculations
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;
    // print the answer
    cout << "The volume is: " << volume << endl;
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;
    return 0;
 }