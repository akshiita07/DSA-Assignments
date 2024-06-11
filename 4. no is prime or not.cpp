/*
4. no is prime or not
*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter no : "<<endl;
	cin>>n;
	
	for(int i=2; i<n; i++){
		
		if(n%i==0){
		cout<<n<<" is NOT Prime for "<<i<<endl;
		}
		else{
		cout<<n<<" is Prime for "<<i<<endl;
		}
	}
	
	
	
	


	return 0;
}

