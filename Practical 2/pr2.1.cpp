//Practical 2 - C++ course
//Maria Isabel Vera Cabrera

//Exercise 1: Point in a circle.

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

bool point_in_circle(double x, double y, double x_center, double y_center, double r){
double distance=0;
distance = sqrt(pow(x-x_center,2)+pow(y-y_center,2));
if (distance<=r)
    return true;
else
    return false;
}

// function main begins program execution
int main()
{
double x, y, x_center, y_center, r;
cout << "Exercise 1: Point in a circle." << endl;
cout << "Please provide the following parameters:" << endl;
cout << "Coordinate x of the point:";
cin  >> x;
cout << "Coordinate y of the point:";
cin  >> y;
cout << "Coordinate x of the center of the circle:";
cin  >> x_center;
cout << "Coordinate y of the center of the circle:";
cin  >> y_center;
cout << "Radius of the circle:";
cin  >> r;
if (point_in_circle(x, y, x_center, y_center, r)==true)
    cout << "The point in the coordinates x: " << x << ", y: " << y << " is enclosed in the circle with center in (" << x_center << ", " << y_center << ") and radius " << r << endl;
else
    cout << "The point in the coordinates x: " << x << ", y: " << y << " is NOT enclosed in the circle with center in (" << x_center << ", " << y_center << ") and radius " << r << endl;
return 0; // indicates that program ended successfully
}
// end function main
