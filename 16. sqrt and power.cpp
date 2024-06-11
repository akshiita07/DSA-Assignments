/*
16. sqrt and power
*/

#include<iostream>
#include<cmath>
using namespace std;



int main()
{
	int n;
	cout<<"Enter no: ";
	cin>>n;
	
	cout<<"Square root of "<<n<<" is: "<<sqrt(n)<<endl;
	
	int a,b;
	cout<<"Enter no a: ";
	cin>>a;
	cout<<"Enter no b to be raised power to a: ";
	cin>>b;
	cout<<"a raised to power b is: "<<pow(a,b);

	return 0;
}

