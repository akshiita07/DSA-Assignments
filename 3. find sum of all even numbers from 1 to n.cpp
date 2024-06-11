/*
3. find sum of all even numbers from 1 to n
*/

#include<iostream>
using namespace std;

int main()
{ 
	int n;
	cout<<"enter no till u want sum: "<<endl;
	cin>>n;
	int sum=0;
	
	
	for(int i=2; i<=n; i=i+2){
		sum=sum+i;
	}
	cout<<"The sum of all even numbers upto "<<n<<" is: "<<sum;


	return 0;
}

