/*
8.more patterns
*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter no : "<<endl;
	cin>>n;
//PATTERN 8: 
//1
//2 3
//4 5 6 
//7 8 9 10
//int count=1;
//	for(int i=1;i<=n; i++){
//		for(int j=1; j<=i; j++){
//			cout<<count<<"  ";
//			count++;
//		}
//		cout<<endl;
//	}
	
//PATTERN 9: 
//1
//2 3
//3 4 5
//4 5 6 7

//	for(int i=1;i<=n; i++){
//		int val=i;
//		for(int j=1; j<=i; j++){
//			cout<<val<<"  ";
//			val++;
//		}
//		cout<<endl;
//	}
	
//PATTERN 10:
//1
//2 1
//3 2 1
//4 3 2 1 


//	for(int i=1;i<=n; i++){
//		int val=i;
//		for(int j=1; j<=i; j++){
//			cout<<val<<"  ";
//			val--;
//		}
//		cout<<endl;
//	}

//PATTERN 11:
	//AAA
	//BBB
	//CCC

//	for(char i=1;i<=n; i++){
//		char ch='A'+i-1;
//		for(char j=1; j<=n; j++){
//			cout<<ch<<"  ";
//		}
//		cout<<endl;
//	}

//PATTERN 12:
//	A B C
//	A B C
//	A B C

//	for(char i=1;i<=n; i++){
//		for(char j=1; j<=n; j++){
//		char ch='A'+j-1;
//			cout<<ch<<"  ";
//		}
//		cout<<endl;
//	}

//PATTERN 13:
//	A B C
//	D E F 
//	G H I
//	char ch='A';
//	for(char i=1;i<=n; i++){
//		for(char j=1; j<=n; j++){
//			cout<<ch<<"  ";
//			ch++;
//		}
//		cout<<endl;
//	}
	
//PATTERN 14:
//	a b c
//	b c d
//	c d e

//	for(char i=1;i<=n; i++){
//	char ch=i+'A'-1;
//		for(char j=1; j<=n; j++){
//			cout<<ch<<"  ";
//			ch++;
//		}
//		cout<<endl;
//	}

//PATTERN 15:
//	A
//	B B
//	C C C

//	for(char i=1;i<=n; i++){
//	char ch=i+'A'-1;
//		for(char j=1; j<=i; j++){
//			cout<<ch<<"  ";
//		}
//		cout<<endl;
//	}

//PATTERN 16:
//	A
//	B C
//	D E F
//	G H I J

//	char ch='A';
//	for(char i=1;i<=n; i++){
//		for(char j=1; j<=i; j++){
//			cout<<ch<<"  ";
//			ch++;
//		}
//		cout<<endl;
//	}

//PATTERN 17:
//	A
//	B C
//	C D E
//	D E F G

//	for(char i=1;i<=n; i++){
//	char ch=i+'A'-1;
//		for(char j=1; j<=i; j++){
//			cout<<ch<<"  ";
//			ch++;
//		}
//		cout<<endl;
//	}

//PATTERN 17:		IMPORTANT
//	D
//	C D
//	B C D
//	A B C D

	for(char i=1;i<=n; i++){
	char ch='A'+n-i;
		for(char j=1; j<=i; j++){
			cout<<ch<<"  ";
			ch++;
		}
		cout<<endl;
	}

	return 0;
}

