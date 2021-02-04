//Practical 5 - C++ course
//Maria Isabel Vera Cabrera

#include <iostream>
#include <array>
#include <math.h>
#include <string>
using namespace std;

//Exercise 1 : Only-digits function
bool digits(string str){
    bool check=true;
    int len=str.length();
    for (int i=0; i<len; i++){
        if (str[i] < '0' || str[i] > '9'){
            check=false;
            break;
        }

    }
    return check;
}
;

//Exercise 2 : Find pairs of characters in a string
int find_pairs(string str2, string twoletters){
    int num_occurrences=0;
    int pos;
    pos=str2.find(twoletters);
    while (str2.length()>0){
        pos=str2.find(twoletters);
        if (pos!=string::npos){
            num_occurrences+=1;
            str2.erase(pos, 2);
        }
        else{
            break;
        }
    }
    return num_occurrences;
}
;

//Exercise 3 : Point data-type
class Point{
    private:
        double x;
        double y;
    public:
    //Default constructor
    Point(){
        x=y=0;
    }
    //Constructor with parameters
    Point(double x_coordinate, double y_coordinate){
        x=x_coordinate;
        y=y_coordinate;
    }
    double calculateDistance(Point p2){
        double distance;
        distance=sqrt(pow(x-p2.x, 2)+pow(y-p2.y,2));
        return distance;
    }
};

//Exercise 4 : Circle data-type
class Circle{
    private:
        double r;
        double x_center;
        double y_center;
    public:
    //Default constructor
    Circle(){
        r=1;
        x_center=y_center=0;
    }
    //Constructor with parameters
    Circle(double radius, double x_coordinate, double y_coordinate){
        r=radius;
        x_center=x_coordinate;
        y_center=y_coordinate;
    }
    void calculateCircumference(){
        double circumference;
        circumference=2*M_PI*r;
        cout<<"The circumference of the circle is: "<< circumference<<endl;
    }
    void calculateArea(){
        double area;
        area=M_PI*pow(r,2);
        cout<<"The area of the circle is: "<< area<<endl;
    }
    void pointInCircle(Point p){
        bool pointInCircle;
        Point center=Point(x_center, y_center);
        if (center.calculateDistance(p)<=r){
            pointInCircle=true;
            cout<<"The point is contained in the circle."<< endl;
        }
        else {
            pointInCircle=false;
            cout<<"The point is NOT contained in the circle."<< endl;
        }
    }
};



//Final Executable function
int main()
{

    //Exercise 1 : Only-digits function
    cout<<"Exercise 1 : Only-digits function"<<endl;
    cout<<"Please enter a string:"<<endl;
    string str;
    cin>>str;
    cout<<"The affirmation the string contains only digits is: " << boolalpha<< digits(str)<<endl; //boolalpha helps printing the boolean as true/false instead of 1/0
    cout<<endl;

    //Exercise 2 : Find pairs of characters in a string
    cout<< "Exercise 2 : Find pairs of characters in a string"<<endl;
    cout<<"Please enter a string:"<<endl;
    string str2;
    cin>>str2;
    cout<<"Please enter a pair of characters that will be searched in the previous string:"<<endl;
    string twoletters;
    cin>>twoletters;
    cout<<"The number of occurrences of the pair of characters "<< twoletters << " in the string " << str2 << " is: " << find_pairs(str2, twoletters)<<endl;
    cout<<endl;


    //Exercise 3 : Point data-type
    cout<< "Exercise 3 : Point data-type"<<endl;
    cout << "Enter the x-coordinate of a point"<<endl;
    double x;
    cin>>x;
    cout << "Enter the y-coordinate of that point"<<endl;
    double y;
    cin>>y;
    Point p1=Point(x,y);

    cout << "Enter the x-coordinate of a second point"<<endl;
    double x2;
    cin>>x2;
    cout << "Enter the y-coordinate of that second point"<<endl;
    double y2;
    cin>>y2;
    Point p2=Point(x2,y2);

    double distance;
    distance=p1.calculateDistance(p2);
    cout<<"The distance between the 2 points is: "<< distance<<endl;
    cout<<endl;

    //Exercise 4 : Circle data-type
    cout<< "Exercise 4 : Circle data-type"<<endl;
    cout << "Enter the radius of the circle to be built"<<endl;
    double r;
    cin>>r;
    cout << "Enter the x-coordinate of the center of the circle"<<endl;
    double x_center;
    cin>>x_center;
    cout << "Enter the y-coordinate of the center of the circle"<<endl;
    double y_center;
    cin>>y_center;

    Circle c1=Circle(r, x_center, y_center);
    c1.calculateCircumference();
    c1.calculateArea();

    cout << "Enter the x-coordinate of a point, to check whether it is contained in the circle"<<endl;
    double x3;
    cin>>x3;
    cout << "Enter the y-coordinate of that point, to check whether it is contained in the circle"<<endl;
    double y3;
    cin>>y3;
    Point p3=Point(x3,y3);

    c1.pointInCircle(p3);


    return 0;
}
