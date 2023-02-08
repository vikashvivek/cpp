#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the n"<<endl;
	cin>>n;
	for (int i = 0; i < n; i+=1)
	{
		for(int j = 0;j<=i;j+=1){
			int ans = j+1;
			char ch = ans+'A'-1;
			cout<<ch;
		}
		for(int j = i;j>0;j-=1){
			int ans = j;
			char ch = ans+'A'-1;
			cout<<ch;
		}

	cout<<endl;
	}
}