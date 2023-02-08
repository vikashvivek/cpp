
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for (int i = 0; i < n; i+=1)
	{
		for(int j=0;j<n-i-1;j++){
			    cout<<" ";
			
		}
		for(int j=0;j<=i;j++){
		    if(j==0 ||i==n-1){
			    cout<<"+";
		        
		    }
		    else{
		        cout<<" ";
		    }
			
		}
		for(int j=0;j<i;j++){
		    if(i==n-1 || j==i-1)
			    cout<<"+";
			    else{
			        cout<<" ";
			    }
			
		}



		cout<<endl;	
	}
}