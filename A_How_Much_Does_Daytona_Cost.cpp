#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    bool isFound=false;
    
    vector<int>book(n);
    for(int i=0;i<n;i++){
        cin>>book[i];
    }
    for(int num:book){
      if(num==k){
        isFound=true;
        break;
      }
    }
    if(isFound){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}