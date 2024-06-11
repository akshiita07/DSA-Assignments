/*
22. fnc for factorial
*/

#include<iostream>
using namespace std;

void fact(int f){
	int factorial=1;
	for(int i=1; i<=f; i++){
		factorial=factorial*i;
	}
	cout<<"Factorial of "<<f<<" is: "<<factorial;
}

int main()
{
	int n;
	cout<<"enter number: "<<endl;
	cin>>n;
	
	fact(n);


	return 0;
}

