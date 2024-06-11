/*
17. calculator using switch
*/

#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"ENter first operand: "<<endl;
	cin>>a;
	cout<<"ENter second operand: "<<endl;
	cin>>b;
	
	char op;
	cout<<"Choose operator from + ,-,*,/"<<endl;
	cin>>op;
	
	switch(op){
		
		case '+':
			cout<<a<<" + "<<b<<" = "<<a+b;
			break;
			
		case '-':
			cout<<a<<" - "<<b<<" = "<<a-b;
			break;
			
		case '*':
			cout<<a<<" * "<<b<<" = "<<a*b;
			break;
			
		case '/':
			cout<<a<<" / "<<b<<" = "<<a/b;
			break;
			
		default:
			cout<<"Choose correct operation! ";
	}


	return 0;
}

