/*
Getting started with c++
*/

#include<iostream>
using namespace std;



int main()
{
//	cout<<"Hello world"<<endl;
//	int a=10;
//	cout<<"value of a is: "<<a<<endl;
//	
//	cout<<5/10<<endl;
//	cout<<5.0/10<<endl;
//
//	int b=7/10;
//	cout<<b<<endl;
//	float c=7.0/10;
//	cout<<c<<endl;

//IF ELSE BLOCK
//	int a;
//	cout<<"enter value of a: "<<endl;
//	cin>>a;
//	if(a>0){
//		cout<<a<<" is positive number"<<endl;
//	}
//	else{
//		if(a==0){
//		cout<<a<<" is zero"<<endl;
//			
//		}
//		else{
//			
//		cout<<a<<" is negative number"<<endl;
//		}
//	}

//	int a,b;
//	cout<<"enter value of a: "<<endl;
//	cin>>a;
//	cout<<"enter value of b: "<<endl;
//	cin>>b;
//	
//	if(a>b){
//		cout<<a<<" is larger"<<endl;
//	}
//	else{
//		
//		cout<<b<<" is larger"<<endl;
//	}

//PRINT NUMBERS FROM 1 TO N
//	int n;
//	cout<<"enter no till u want couting: "<<endl;
//	cin>>n;
	
//	for(int i=0; i<=n; i++){
//		cout<<i<<endl;
//	}

//	int i=0;
//	while( i<=n){
//		cout<<i<<endl;
//		i++;
//	}

//	int i=1;
//	do{
//		cout<<i<<endl;
//		i++;
//	}while( i<=n);
	
//	SUM FROM 1 TO N
	int n;
	cout<<"enter no till u want sum: "<<endl;
	cin>>n;
	int sum=0;
//	for(int i=0; i<=n; i++){
//		sum=sum+i;
//	}
	int i=0;
	while(i<=n){
		sum=sum+i;
		i++;
	}
	cout<<"The sum till "<<n<<" is: "<<sum;
	
	

	return 0;
}

