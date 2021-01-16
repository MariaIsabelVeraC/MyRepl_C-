//Practical 2 - C++ course
//Maria Isabel Vera Cabrera

//Exercise 2: Position of a moving body

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double position_moving_body(double v, double a, double x0, double t){
double position=0.0;
position = x0+v*t+a/2*pow(t,2);
return position;
}

// function main begins program execution
int main()
{
double x0, v, a, n, delta_t;
cout << "Exercise 2: Position of a moving body." << endl;
cout << "Enter the initial position:";
cin  >> x0;
cout << "Enter the speed:";
cin  >> v;
cout << "Enter the acceleration:";
cin  >> a;
cout << "How many times you want to display the position of the moving body?";
cin  >> n;
cout << "How often (in seconds) you want to update the position of the moving object?";
cin  >> delta_t;
int i=0;
double t=0;
while (i<n){
    cout << "At time " << t << " the position is " << position_moving_body(v, a, x0, t) << endl;
    t+=delta_t;
    i+=1;
}
return 0; // indicates that program ended successfully
}
// end function main
