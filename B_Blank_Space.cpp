#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    int maxi=0;
    int cnt=0;
    for(int i=0;i<n;i++){
      if(a[i]==0){
        cnt++;
      }else{
        cnt=0;
      }
      maxi=max(maxi,cnt);
    }
    cout<<maxi<<endl;
  }
  return 0;
  
}