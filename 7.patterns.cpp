/*
7.patterns
*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter no : "<<endl;
	cin>>n;
	
//	for(int i=1; i<=n; i++){
//		for(int j=1; j<=n; j++){
//			cout<<j;
//		}
//		cout<<endl;
//	}

	//for reverse order:
//	for(int i=1; i<=n; i++){
//		for(int j=1; j<=n; j++){
//			cout<<n-j+1;
//		}
//		cout<<endl;
//	}

//PATTERN3: 123
//			456
//			789
//	int count=1;
//	for(int i=0; i<n; i++){
//		for(int j=0; j<n; j++){
//			cout<<count<<"  ";
//			count++;
//		}
//		cout<<endl;
//	}


//PATTERN 4: 
//*
//* *
//* * *
//	for(int i=1;i<=n; i++){
//		for(int j=1; j<=i; j++){
//			cout<<"* ";
//		}
//		cout<<endl;
//	}

//PATTERN 5: 
//1
//2 2
//3 3 3
//int count=1;
	for(int i=1;i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<<i;
			
		}
//		count++;
		cout<<endl;
	}

	return 0;
}

