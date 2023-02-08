#include<iostream>
using namespace std;
int main(){
  int n,m;
  cout<<"enter no of rows and colum"<<endl;
  cin>>n>>m;
  for(int row=0;row<n;row +=1){
    for(int col=0; col<m;col +=1){
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}