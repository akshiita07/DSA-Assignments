/*
23. fnc to print coutning
*/

#include<iostream>
using namespace std;

void count(int n){
	for(int i=0; i<=n; i++){
		cout<<i<<endl;
	}
}
int main()
{
	int n;
	cout<<"enter n till counting: "<<endl;
	cin>>n;
	
	count(n);
	


	return 0;
}

