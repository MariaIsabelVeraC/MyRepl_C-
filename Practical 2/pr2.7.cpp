//Practical 2 - C++ course
//Maria Isabel Vera Cabrera

//Exercise 7: Recursive power of integer numbers

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int calls1=0;
int calls2=0;

long long int power(int a, int n){
calls1+=1;
if (n==0) {
    return 1;
}
else if (n>=1) {
    return a*power(a, n-1);
}
else
    cout << "The exponent must be a non-negative number.";
}

long long int power2(int a, int n){
calls2+=1;
if (n==0) {
    return 1;
}
else if (n%2!=0) {
    return a*power2(a, n/2)*power2(a, n/2);
}
else if (n%2==0) {
    return power2(a, n/2)*power2(a, n/2);
}
else
    cout << "The exponent must be a non-negative number.";
}

// function main begins program execution
int main()
{
int a;
int n;
cout << "Exercise 7: Recursive power of integer numbers." << endl;
cout << "Enter an integer:";
cin  >> a;
cout << "Enter a non-negative integer:";
cin >> n;
cout << "The " << n << "-th power of " << a << " is " << power(a, n) << ", and it needs " << calls1 << " calls to the recursive algorithm with the first method."<< endl;
cout << "The " << n << "-th power of " << a << " is " << power2(a, n) << ", and it needs " << calls2 << " calls to the recursive algorithm with the second method."<< endl;
cout << endl;
cout << "The number of recursive calls in the first method is n+1."<< endl;
cout << "The number of recursive calls in the second method is 1 if n=0 and 4*(2^floor(log2(n)))-1." << endl;
return 0; // indicates that program ended successfully
}
// end function main
