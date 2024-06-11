/*
15. decimal to binary
*/

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the decimal number: ";
	cin>>n;
	
	int bin=0;
	int i=0;
	int rem;
	while(n!=0){
		
		rem= n%2;
		
		bin=bin+rem*pow(10,i);
		
		i++;
		n=n/2;
		
		
	}
	cout<<"Binary number is: "<<bin;


	return 0;
}

