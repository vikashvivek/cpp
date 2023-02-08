#include<iostream>
using namespace std;
int main(){
	int n;
	int count = 0;
	cout<<"enter the n"<<endl;
	cin>>n;
	for (int i = 0; i < n; i+=1)
	{
		for(int j=0;j<=i;j+=1){
			count+=1;
			
			if(i==j)
				cout<<count;
			else
				cout<<count<<"*";
		}
		cout<<endl;
	}
	for (int i = 0; i < n; i+=1)
	{
		count=count-n-i;
		for(int j=0;j<n-i;j+=1){
			count+=1;
			
			if(i==j)
				cout<<count;
			else
				cout<<count<<"*";
		}
		cout<<endl;
	}



}