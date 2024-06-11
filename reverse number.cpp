/*
reverse number
*/

#include<iostream>
using namespace std;


int main()
{
	int n;
	cout<<"enter number ";
	cin>>n;
	
	int rem,reverse;
	
	while(n!=0){
		
		rem=n%10;
		reverse=reverse*10+rem;
		
		n=n/10;
		
	}
	
	cout<<"Reversed digit: "<<reverse;
	
	
	


	return 0;
}

