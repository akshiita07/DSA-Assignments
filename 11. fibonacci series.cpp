/*
11. fibonacci series
0 1 1 2 3 5 8 13 21_ _ _ _ _ _ _ _(9times)
*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter no till which u want fibonacci: ";
	cin>>n;

	int a=0;
	int b=1;
	int sum=0;
	cout<<endl<<a<<endl<<b<<endl;
	
	for(int i=0; i<n-2; i++){
		sum=a+b;
		cout<<sum<<endl;
		
		a=b;
		b=sum;
	}

	return 0;
}

