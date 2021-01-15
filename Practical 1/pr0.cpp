//Practical 1 - C++ course
//Maria Isabel Vera Cabrera

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// function main begins program execution
int main()
{

//Exercise 1
cout<<"Exercise 1: Program 0"<< endl;
cout << "Welcome to C++!" << endl; // prints on screen
cout<<endl;

//Exercise 2
cout<<"Exercise 2: Read in 2 integers and display their product"<< endl;
int a;
int b;
cout<<"Please enter an integer a:";
cin>>a;
cout<<"Please enter an integer b:";
cin>>b;
cout<<"The product of a and b is " << a*b<<endl;
cout<<endl;

//Exercise 3
cout<<"Exercise 3: Is a number multiple of another one"<< endl;
int c;
int d;
cout<<"Please enter an integer c:";
cin>>c;
cout<<"Please enter an integer d:";
cin>>d;
if (c%d==0){
  cout<<c<<" is a multiple of "<<d<<endl;
}
else
  cout<<c<<" is not a multiple of "<<d<<endl;
cout<<endl;

//Exercise 4
cout<<"Exercise 4: Display a line of characters"<< endl;
int n;
int i=1;
cout<<"Please enter an integer:";
cin>>n;
while (i<=n) {
  cout<<"*";
  i+=1;
} 
cout<<endl;
cout<<endl;

//Exercise 5
cout<<"Exercise 5: Factorial"<< endl;
int e;
cout << "Note: For a correct result, the maximum number allowed in the following input (int type) is 12, because the output cannot be higher than 2147483647." << endl;
cout<<"Please enter an integer (int):";
cin>>e;
int j=e;
int f=1;
while (j>=1){
  f=f*j;
  j-=1;
}
cout << "The factorial of "<< e << " is " << f << endl;
cout<<endl;

short e_short;
cout << "Note: For a correct result, the maximum number allowed in the following input (short type) is 7, because the output cannot be higher than 32767." << endl;
cout<<"Please enter an integer (short):";
cin>>e_short;
short j_short=e_short;
short f_short=1;
while (j_short>=1){
  f_short=f_short*j_short;
  j_short-=1;
}
cout << "The factorial of "<< e_short << " is " << f_short << endl;
cout<<endl;

long long e_long;
cout << "Note: For a correct result, the maximum number allowed in the following input (long long type) is 20, because the output cannot be higher than 9,223,372,036,854,775,807." << endl;
cout<<"Please enter an integer (long long):";
cin>>e_long;
long long j_long=e_long;
long long f_long=1;
while (j_long>=1){
  f_long=f_long*j_long;
  j_long-=1;
}
cout << "The factorial of "<< e_long << " is " << f_long << endl;
cout<<endl;

//Exercise 6
cout<<"Exercise 6: Nested loops"<< endl;
int k1=5;
int k2=k1;
int l=5;
while (l>=1){
  while (k2>=1){
    cout<<"*";
    k2-=1;
  }
  cout<<endl;
  l-=1;
  k2=k1;
}
cout<<endl;
cout<<endl;

k1=1;
k2=1;
l=5;
while (l>=1){
  while (k2>=1){
    cout<<"*";
    k2-=1;
  }
  cout<<endl;
  l-=1;
  k1+=1;
  k2=k1;
}
cout<<endl;
cout<<endl;

k1=5;
k2=k1;
l=5;
while (l>=1){
  while (k2>=1){
    cout<<"*";
    k2-=1;
  }
  cout<<endl;
  l-=1;
  k1-=1;
  k2=k1;
}
cout<<endl;
cout<<endl;

//Exercise 7
cout<<"Exercise 7: Real-valued max and min"<< endl;

double min, max;
int m;

for (m = 1; m <= 10; m=m+1)
{
    double g;
    cout<<"Please enter a real value:";
    cin>>g;

    if (m == 1) 
    {
        min = max = g;
    }
    else
    {
        if (g > max) 
          max = g;
        if (g < min)
          min = g;
    }
}
cout << "The minimum of the 10 input values is " << setprecision(12)<<min << " and the maximum is " << setprecision(12) << max << endl;
cout<<endl;

//Exercise 8
cout<<"Exercise 8: Approximating Pi"<< endl;
int p;
cout<<"Please enter an integer:";
cin>>p;
double pi=0.0;
int h;
for(h=0; h<=p; h=h+1){
  pi+=pow(-1,h)*(4/double((2*h)+1));
}
cout << "The "<< p << "-th pi approximation is " << setprecision(12) << pi <<endl;
cout<<endl;

double epsilon;
cout<<"Please enter a real value (epsilon):";
cin>>epsilon;
int q=1;
pi=4.0;
double pi_ant=0.0;
while(abs(pi-pi_ant)>=epsilon){
  pi_ant+=pow(-1,(q-1))*(4/double((2*(q-1))+1));
  pi+=pow(-1,q)*(4/double((2*q)+1));
  q+=1;
}
cout << "The n pi approximation whose difference in absolute value with the n-1 pi approximation is less than " << epsilon << ", is pi=" << setprecision(12) <<pi << ", when n="<<q-1<<endl;
cout << endl;

cout << "The second method gives a better approximation of pi."<<endl;
cout << endl;

return 0; // indicates that program ended successfully
}
// end function main