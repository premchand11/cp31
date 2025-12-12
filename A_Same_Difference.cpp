#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    for(int i=n-2;i>=0;i--){
      if(s[i]!=s[n-1]){
        ans++;
      }
    }
    cout<<ans<<endl;

  }
  return 0;
}