/*
10. sum from 1 to n 
*/

#include<iostream>
using namespace std;



int main()
{
	int n;
	cout<<"Enter no till which u want to count: "<<endl;
	cin>>n;
	
	int sum=0;
	
	for(int i=0; i<=n; i++){
		sum= sum+i;
	}
	cout<<"Sum upto "<<n <<" is: "<<sum<<endl;


	return 0;
}

