/*
14. binary to decimal
*/

#include<iostream>
#include<cmath>
using namespace std;



int main()
{
	int n;
	cout<<"Enter the binary number: ";
	cin>>n;
	
	int rem,dec;
	
	int i=0;
	while(n!=0){
		
		rem=n%10;
		dec= rem*pow(2,i)+dec;
		n=n/10;
		i++;
	}


	cout<<"Decimal number is: "<<dec;
	
	return 0;
}

