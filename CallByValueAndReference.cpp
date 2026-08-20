#include<iostream>
using namespace std;
void callByValue(int x){
	x +=10;
	cout<<"Variable inside call by value "<<x<<endl;
	
}
void callByReference(int &x){
	x+=10;
	cout<<"variable inside call by reference"<<x<<endl;
	
	
}


int main(){
	int a=10, b=10;
	cout<<"variable before call by value "<<a<<endl;
	callByValue(a);
	cout<<"variable after call by value "<<a<<endl;
	
	cout<<"\nvariable before call by reference:"<<a<<endl;
	callByReference(b);
	cout<<"After call by reference:"<<b<<endl;
	cout<<"Author by Sachin Aryal";
	
	
	
}
