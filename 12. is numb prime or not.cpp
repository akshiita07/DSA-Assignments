/*
12. is numb prime or not
*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter no to check: ";
	cin>>n;
	
	bool isPrime=1;
		
	for(int i=2; i<n; i++){
		
		if(n%i==0){
			// no gets divided-> not prime
			isPrime=0;
			break;
		}
	}
	
	if(isPrime==0){
		
			cout<<"Number "<<n<<" is NOT PRIME NUMBER"<<endl;
	}
	else{
		
			cout<<"Number "<<n<<" is a PRIME NUMBER"<<endl;
	}


	return 0;
}

