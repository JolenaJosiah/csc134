/*
// CSC 134
// M2T1 - Receipt
// Jolena
// 1/29/24
*/

 #include <iostream>
 #include <string>
 #include <iomanip>
 using namespace std;

 int main()
 {
    cout << "M2T1" << endl;
    cout << "Thank you for your service" << endl;
    //set up variables
    string meal = "value Meal";
    // all in $, except the percent;
    double meal_price = 5.99;
    double tax_percent = 0.08;
    double tax_amount = 0;
    double total = 0;

    // do calculations
   tax_amount = meal_price * tax_percent;
   total = meal_price + tax_amount;

    
   // print the recipt
   // print this one to set the decimals to exactly 2
   // at he top add:
    // #include <iomanip>
    cout << fixed << setprecision (2);

    cout << "meal" << "\t\t$" << meal_price << endl;
    cout << "tax" << "\t\t$" << tax_amount << endl;
    cout << "total" << "\t\t$" << total << endl;

    return 0;
 }