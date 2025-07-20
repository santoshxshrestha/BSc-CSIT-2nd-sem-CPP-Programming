//program to overload a function area() to calculate the area of a circle , rectangle and triangle
// Author: Santosh Shrestha
#include <iostream>
#include <cmath>
using namespace std;    

const double PI = 3.141592653589793;
float area(int lenght, int breadth){
    return lenght * breadth;
}

float area(int radius){
    return PI * radius * radius;
}

double area(float a, float b, float c) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main(){
    cout << "Area of rectangle with length 5 and breadth 10: " << area(5, 10) << endl;
    cout<< "Area of circle with radius 7: " << area(7) << endl;
    cout << "Area of triangle with sides 4.2, 4, 42:" << area(2, 4, 2) << endl;
    return 0;
}