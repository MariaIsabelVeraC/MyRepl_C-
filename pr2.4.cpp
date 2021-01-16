//Practical 2 - C++ course
//Maria Isabel Vera Cabrera

//Exercise 4: Floyd triangle

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int floyd_triangle(int n){
int i;
int number=1;
int cant_numbers=1;
for (i=1; i<=n; i++){
    while (cant_numbers<=i){
        cout << number << " ";
        number+=1;
        cant_numbers+=1;
    }
    cant_numbers=1;
    cout << endl;
}
}

// function main begins program execution
int main()
{
int n;
cout << "Exercise 4: Floyd triangle." << endl;
cout << "Enter the number of desired lines for the Floyd triangle:";
cin  >> n;
floyd_triangle(n);

return 0; // indicates that program ended successfully
}
// end function main
