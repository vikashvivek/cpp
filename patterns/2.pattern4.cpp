#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the n"<<endl;
	cin>>n;
	for(int i=0;i<n;i+=1){
		for (int j = 0; j <(n-i); j++)
		{
			cout<<j+1;
		}
		cout<<endl;
	}
}