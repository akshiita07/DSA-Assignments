/*
To reverse digits of a number
*/

#include<iostream>
using namespace std;



int main()
{
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	
	int rem;
	int reverse=0;
	
	while(n!=0){
		rem=n%10;
		reverse= reverse*10 + rem;
		n=n/10;
	}
	
	cout<<"The reversed number is: "<<reverse<<endl;


	return 0;
}

