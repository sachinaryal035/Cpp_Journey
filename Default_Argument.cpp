//When declaring a function we can specify a default value for the last parameter which are called default arguments.

#include<iostream>
using namespace std;

int multiply(int a, int b = 2)
{
    int multiple;
    multiple = a * b;
    return multiple;
}
int main()
{
    cout<<multiply(5)<<endl; // I have passed only one argument so it will take the default value of the second argument which is 2.
    cout<<multiply(5,4)<<endl; // I have passed two arguments so it will take the value of the second argument which is 4.
    return 0;
}
