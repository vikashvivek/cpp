#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the n"<<endl;
	cin>>n;
	for (int i = 0; i < n; i+=1)
	{
		for (int j = 0; j <=i; j++)
		{
			cout<<i+1;
			if(i!=j)
				cout<<"*";
		}
		cout<<endl;
	}
	for (int i = 0; i < n; i+=1)
	{

	for(int j = 0;j <n-i;j+=1){
			cout<<n-i;
			if(n-i-1!=j)
				cout<<"*";
		}

		cout<<endl;
	}

}