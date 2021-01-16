//Practical 2 - C++ course
//Maria Isabel Vera Cabrera

//Exercise 6: Recursive Fibonacci

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int calls=0;

int fibonacci(int n){
calls+=1;
if (n==0||n==1) {
    return n;
}
else {
    return fibonacci(n-1)+fibonacci(n-2);
}
}

// function main begins program execution
int main()
{
int n;
cout << "Exercise 6: Recursive Fibonacci." << endl;
cout << "Enter an integer:";
cin  >> n;
cout << "The " << n << "-th number in the Fibonacci sequence is " << fibonacci(n) << ", which was obtained with " << calls << " calls to the recursive function"<< endl;

return 0; // indicates that program ended successfully
}
// end function main
