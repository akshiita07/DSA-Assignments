/*
20. fnc even or odd
*/

#include<iostream>
using namespace std;

void evenodd(int n){
	if(n%2==0){
		cout<<n<<" is EVEN number"<<endl;
	}
	else{
		cout<<n<<" is ODD number"<<endl;
	}
}

int main()
{
	int a;
	cout<<"enter number: "<<endl;
	cin>>a;
	
	evenodd(a);
	
	


	return 0;
}

