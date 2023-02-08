#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number"<<endl;
	cin>>n;
	for (int i = 0; i < n; i+=1)
	{
		for(int j=0;j<n+3-i;j+=1){
			cout<<"*";
		}
		for(int j=0;j<=i;j+=1){
			if(i==j)
				cout<<i+1;
			else
				cout<<i+1<<"*";		
		}
		for(int j=0;j<n+3-i;j+=1){
			cout<<"*";
		}


		cout<<endl;
	}
}