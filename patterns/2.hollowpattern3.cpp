#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the n"<<endl;
	cin>>n;
	for (int i = 0; i < n; i+=1)
	{
		for(int j=0;j<=i;j+=1){
			if (i==0||j==0||j==i||i==n-1)
			{
				cout<<j+1;
			}
			else{
				cout<<" ";
			}


			
		}
		cout<<endl;
	}
}