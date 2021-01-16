//Practical 2 - C++ course
//Maria Isabel Vera Cabrera

//Exercise 5: Non-recursive Fibonacci

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int fibonacci(int n){
int i;
int fibo;
int a=0;
int b=1;
if (n==0||n==1)
    fibo=n;
else
    for (i=2; i<=n; i++){
        fibo=a+b;
        a=b;
        b=fibo;
    }
return fibo;
}

// function main begins program execution
int main()
{
int n;
cout << "Exercise 5: Non-recursive Fibonacci." << endl;
cout << "Enter an integer:";
cin  >> n;
cout << "The " << n << "-th number in the Fibonacci sequence is " << fibonacci(n) << endl;

return 0; // indicates that program ended successfully
}
// end function main
