/*
6. print pattern
111
222
333
444
*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter no : "<<endl;
	cin>>n;
	
	for(int i=1; i<n; i++){
		
		for(int j=0; j<3 ;j++){
			
			cout<<i;
			
		}
		cout<<endl;
		
	}
	
//	for(int i=0; i<n; i++){
//		
//		for(int j=1; j<n ;j++){
//			
//			cout<<j;
//			
//		}
//		cout<<endl;
//		
//	}
	


	return 0;
}

