//Practical 4 - C++ course
//Maria Isabel Vera Cabrera

#include <iostream>
#include <array>
#include <math.h>
using namespace std;

//Function for reading a polynomial and saving its coefficients in an array
double * read_poly(int &n){
  cout << "Please enter the degree of the desired polynomial: ";
  cin >> n;
  double * c=new double[n+1];
  for(int i=0;i<=n;i++){
    cout << "coefficient of degree " << i << ": ";
    cin >> c[i];
  }
  return c;
}

//Function for printing a polynomial previously defined, adding the corresponding x terms
void print_poly(double *c, int n){
  int i;
  cout << c[0];
  if(n>0)
    cout << " + ";
  for(i=1;i<n;i++)
    cout << c[i] << "*x^" << i << " + ";
  if(n>0)
    cout << c[n] << "*x^" << i;
  cout << endl;
  cout << endl;
}

//Function for getting the value of the coefficient of the polynomial in the position defined by the user
double get_value_position(double *c, int &p, int n){
  cout << "Please enter the desired position in x from the polynomial to retrieve its corresponding value: ";
  cin >> p;
  while (p>n){
    cout << "The position given is higher than the max degree of the polynomial. Insert a value from 0 to " << n <<"."<< endl;
    cout << "Please enter the desired position in x from the polynomial to retrieve its corresponding value: ";
    cin >> p;
  }
  double v = c[p];
  return v;
}

//Prints the coefficient in the position previously defined
void print_value_position(double v, int p){
  cout << "The polynomial value for the position x^" << p << " is: " << v << endl;
  cout << endl;
}

//Function for adding two polynomials given as parameters (termwise)
double * poli_sum (double * p1, int d1, double * p2, int d2, int & dr){

    dr=max(d1, d2);

    double * p3=new double[dr+1];
    double *p1n= new double[dr+1];
    double *p2n= new double[dr+1];

    for(int i=0;i<=dr;i++){
        if(i<=d1){
            p1n[i]=p1[i];
        }
        else{
            p1n[i]=0;
        }
        if(i<=d2){
            p2n[i]=p2[i];
        }
        else{
            p2n[i]=0;
        }
        p3[i]=p1n[i]+p2n[i];
    }
    delete[] p1n;
    delete[] p2n;
    return p3;
}

//Function for multiplying two polynomials
double * poli_prod (double * p1, int d1, double * p2, int d2, int & dr){

    dr=d1+d2;

    double * p4=new double[d1+d2+1];

    for(int k=0;k<=d1+d2;k++){
        p4[k]=0;
    }
    for(int i=0;i<=d1;i++){
        for (int j=0; j<=d2; j++){
            p4[i+j]+=p1[i]*p2[j];
        }
    }

    return p4;
}

//Final Executable function
int main()
{
    double *p1;
    double *p2;
    double v2;
    double *p3;
    double *p4;
    int g1;
    int d1;
    int pos2;
    int d2;
    int dr;

    p1=read_poly(g1);
    print_poly(p1,g1);

    //Exercise 1: Calculation of the polynomial value for a certain position x (returns a real number):
    v2=get_value_position(p1,pos2, g1);
    print_value_position(v2,pos2);

    //Exercise 2: Sum of two polynomials (returns a polynomial):
    cout << "Now, we are going to perform the sum between two polynomials." << endl;

    cout << "Define the first polynomial:" << endl;
    p1=read_poly(d1);
    print_poly(p1,d1);

    cout << "Now, define the second polynomial:"<< endl;
    p2=read_poly(d2);
    print_poly(p2,d2);

    p3=poli_sum(p1, d1, p2, d2, dr);
    cout<< "The resulting polynomial after summing the two previously defined polynomials is:" << endl;
    print_poly(p3, dr);

    //Exercise 3: Product of two polynomials (returns one polynomial):
    cout << "Now, we are going to perform the product between those two polynomials." << endl;

    p4=poli_prod(p1, d1, p2, d2, dr);
    cout<< "The resulting polynomial after multiplying the two previously defined polynomials is:" << endl;
    print_poly(p4, dr);

    // freed the allocated memory
    delete[] p1;
    delete[] p2;
    delete[] p3;
    delete[] p4;

    return 0;
}
