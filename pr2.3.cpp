//Practical 2 - C++ course
//Maria Isabel Vera Cabrera

//Exercise 3: Swap numbers (by reference)

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void swap_numbers(int &x, int &y){
x=y;
y=x;
}

// function main begins program execution
int main()
{
int x,y;
cout << "Exercise 3: Swap numbers (by reference)." << endl;
cout << "Enter an integer (x):";
cin  >> x;
cout << "Enter another integer (y):";
cin  >> y;
swap(x, y);
cout << "The new value of x is " << x << " and the new value of y is " << y << "." << endl;

return 0; // indicates that program ended successfully
}
// end function main
