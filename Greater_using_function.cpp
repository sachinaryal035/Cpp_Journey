#include<iostream>
using namespace std;

int great(int a, int b){
	if (a>b)
	   return a;
	else
	   return b;
}



int main(){
	int a , b;
	cout<<"Enter two number"<<endl;
	cin>>a>>b;
	cout<<"The greatest number is "<<great(a,b)<<endl;
	cout<<"Author by Sachin Aryal"<<endl;
}
