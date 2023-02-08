#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"enter the row and column"<<endl;
	cin>>a>>b;
	for(int i = 0;i<a;i+=1){
		for(int j = 0; j<b;j+=1){
			if(i==0||i==a-1){
				cout<<"*";
			}
			else{
				if(j==0||j==b-1){
					cout<<"*";
				}
				else{
					cout<<" ";
				}
			}
	}
		cout<<endl;
	}
}