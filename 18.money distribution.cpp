/*
18.money distribution
money=1330
number of 100 ruppee notes, 50, 20, 1
*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"ENter total amount: "<<endl;
	cin>>n;
	
	int hund,fif,twen,one;
//	n=(hund*100)+(fif*50)+(twen*20)+(one*1);

		switch(n>=100){
			case 1:
				hund=n/100;
				n=n-hund*100;
				cout<<"Number of 100 ruppee notes: "<<hund<<endl;
				break;
			}
		
		switch(n>=50){
			case 1:
				fif=n/50;
				n=n-fif*50;
				cout<<"Number of 50 ruppee notes: "<<fif<<endl;
				break;
		}
		
		switch(n>=20){		
			case 1:
				twen=n/20;
				n=n-twen*20;
				cout<<"Number of 20 ruppee notes: "<<twen<<endl;
				break;
		}
		
		switch(n>=1){		
			case 1:
				one=n/1;
				n=n-one*1;
				cout<<"Number of 1 ruppee notes: "<<one<<endl;
				break;
		}
 	
			
			
	

	return 0;
}

