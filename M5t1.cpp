#include <iostream>
using namespace std;

// CSC 134
// M5T1 - Intro to Functions
// Jolena J.
// 3/18/24

void say_hello();
int give_the_answer();
int double_a_number(int num);

int main()
{
    cout << "Hello from main()" << endl;
    say_hello();
    int my_answer = give_the_answer();
    cout << "The amswer is: " << my_answer << endl;
    //Double the answer
    int two_times = double_a_number(7);
    cout << "Here's another number: " << two_times << endl;
    return 0;
}

void say_hello() {
    cout << "HI from say_hello()" << endl;
    return;
}

int give_the_answer(){
    return 42;
}

int double_a_number(int num) {
   int  new_num = num * 2;
return new_num;
}