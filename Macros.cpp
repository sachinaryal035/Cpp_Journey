/*Macros are preprocessor directives defined using the #define
directive that replace code or values before the compilation process begins.*/

#include<iostream>
using namespace std;
#define mul(a,b) a*b 
#define div(a,b) a/b
#define add(a,b) a+b
#define sub(a,b) a-b
int main()
{
    cout<<mul(8,4)<<endl;
    cout<<div(8,4)<<endl;
    cout<<add(8,4)<<endl;
    cout<<sub(8,4)<<endl;
    return 0;
}