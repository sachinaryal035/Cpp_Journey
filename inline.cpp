/*A function which is expanded inline by the compiler each time
its called, instead of generating a separate function call
instruction is called an inline function*/

#include<iostream>
using namespace std;
 inline int add(int a, int b)
 {
    int sum;
    sum = a+b;
    return sum;
 }
 int main()
 {
    int x, y;
    cout<<"Enter Two number:"<<endl;
    cin>>x>>y;
    cout<<"The sum is: "<<add(x,y)<<endl;
    return 0;
 }