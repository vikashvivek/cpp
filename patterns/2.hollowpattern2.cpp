#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the n"<<endl;
	cin>>n;
	for (int i = 0; i < n; i+=1)
	{
		for(int j=0;j<n-i;j+=1){
			if (i==0||j==0||j==n-i-1)
			{
				cout<<"*";
			}
			else{
				cout<<" ";
			}


			
		}
		cout<<endl;
	}
}