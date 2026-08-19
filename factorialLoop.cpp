#include<iostream>
using namespace std;
int main(){
	int n;
	long long factorial = 1;
	cout<<"Enter a number for factorial"<<endl;
	cin>>n;
	
	for(int i=1; i<=n; i++){
		factorial*= i;
	}
	cout<<"Factorial:"<<factorial<<endl;
	cout<<"Author by Sachin Aryal"<<endl;
}
