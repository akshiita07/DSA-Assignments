/*
2. To print char def
if A-Z then capital
if a-z then small
if 0=9 then numeical
*/

#include<iostream>
using namespace std;

int main()
{
	char ch;
	cout<<"Enter the character: "<<endl;
	cin>>ch;
	
	if(ch>=96 && ch<=122){
		cout<<"Small letter"<<endl;
	}
	else if(ch>=65 && ch<=90){
		cout<<"Capital letter"<<endl;
	}
	else if(ch>=48 && ch<=57){
		cout<<"Number"<<endl;
	}

	return 0;
}

