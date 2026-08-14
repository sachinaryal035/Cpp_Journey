/*
Function overloading is a feature in C++ that allows multiple functions to have the same name but different
 parameters. This enables developers to create functions that perform similar tasks but with different input 
 types or numbers of arguments.
*/

#include<iostream>
using namespace std;

int area(int length, int breadth) {
    return length * breadth; 
}

int area(int length) {
    return length * length; 
}


int main() {
    int area_rectangle, area_square, length, breadth;
    cout << "Enter length and breadth of rectangle: "<< endl;
    cin >> length >> breadth;
    area_rectangle = area(length, breadth);
    cout << "Area of rectangle: " << area_rectangle << endl;
    area_square = area(length);
    cout << "Area of square: " << area_square << endl;


    return 0;
}