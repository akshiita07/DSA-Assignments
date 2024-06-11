/*
21. fnc find nCr
nCr= n!/r!*(n-r)!
*/

#include<iostream>
using namespace std;

void cal(int n,int r){
	int ansn=1;
	int ansr=1;
	int ansn_r=1;
	for(int i=1; i<=n; i++){
		ansn=ansn*i;
	}
	for(int i=1; i<=r; i++){
		ansr=ansr*i;
	}
		for(int i=1; i<=(n-r); i++){
		ansn_r=ansn_r*i;
	}
	int ans=ansn/(ansr*ansn_r);
	cout<<"nCr= "<<n<<" C "<<r<<" = "<<ans;
}

int main()
{
	int n,r;
	cout<<"enter n: "<<endl;
	cin>>n;
	cout<<"enter r: "<<endl;
	cin>>r;
	
	if(r==0){
		cout<<"Value of nCr is: 1"<<endl;
	}
	
	cal(n,r);

	

	return 0;
}

