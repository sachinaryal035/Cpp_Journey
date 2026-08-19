#include<iostream>
using namespace std;
int main(){
	int n, sum=0, rem;
	cout<<"Enter a positive number"<<endl;
	cin>> n;
	while(n!=0){
		rem= n%10;
		sum= sum + rem;
		n=n/10;
		
	}
	cout<<"The sum of digits of number is "<<sum<<endl;
	cout<<"Author by Sachin Aryal"<<endl;
	
}
