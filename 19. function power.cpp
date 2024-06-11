/*
19. function power
*/

#include<iostream>
using namespace std;

void power(int p, int q){
	int ans=1;
	for(int i=0; i<q; i++){
		 ans=ans*p;
	}
	cout<<p<<" to the power "<<q<<" is: "<<ans;
}

int main()
{
	int a,b;
	cout<<"enter first number: "<<endl;
	cin>>a;
	cout<<"enter second number: "<<endl;
	cin>>b;
	
	power(a,b);
	



	return 0;
}

