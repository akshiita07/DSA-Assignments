/*
24. fnc to tell prime or not
*/

#include<iostream>
using namespace std;


void prime(int num){
	
	bool isprime=1;
	
	for(int i=2; i<num; i++){
		
		if(num%i==0){
			isprime=0;
		}
		
	}
	
	if(isprime==0){
		
			cout<<"Number "<<num<<" is NOT PRime"<<endl;
	}
	else{
			cout<<"Number "<<num<<" is a PRime number"<<endl;
		}
}

int main()
{
	int n;
	cout<<"enter number: "<<endl;
	cin>>n;
	
	prime(n);



	return 0;
}

