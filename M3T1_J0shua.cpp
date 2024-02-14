// Use as starter for any program
// CSC 134
// ASSIGNMENT
// NAME
// Date

# include <iostream>
using namespace std;

int main() {
     // Take 1 - just a rectangle
    // Declare variables
    double length1, width1, area1;
    double length2, width2, area2;

    // Ask for length and width of first retangle
cout << "Length of first rectange: ";
cin >> length1;
cout << "Width of first rectangle: ";
cin >> width1;
cout << "Length of second rectangle: ";
cin >> length2;
cout << "Width of second rectangle: ";
cin >> width2;

    // Calculate the areas
area1 = length1 * width1;
area2 = length2 * width2;
    // Print the areas

    // Ask for user input
    /*
    cout << "lengh1? ";
    cin >> length1; 
    cout << "Width1? ";
    cin >> width1;
    cout << "area1? ";
    cout << "length2? ";
    cin >> length2;
    cout << "Width2? ";
    cin >> width2;
    cout << "area2? ";
    cin >> area2;
    */


// Do calculations
    area1 = length1 * width1;
     // print the answer
     cout << "is Area1 ";
     cout << area1 << endl;

    area2 = length2 * width2;
     // print the answer
     cout << "is Area2 ";
      cout << area2 << endl;

        return 0;
}