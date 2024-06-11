/*
13. continue statement
does not execute anything ie written below continue statement
*/

#include<iostream>
using namespace std;

int main()
{
	for(int i=0; i<3; i++){
		cout<<"HI"<<endl;
		cout<<"adding continue after this: "<<endl;
		
		continue;
		
		cout<<"after continue statment im not executed"<<endl;
	}


	return 0;
}

