#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int n=s.length();
    int count0=0;
    int count1=0;
    for(char c:s){
      if(c=='0') count0++;
      else count1++;
    }
    int newlen=0;

    for(int i=0;i<n;i++){
      if(s[i]=='0' && count1>0){
        count1--;
        newlen++;
      }else if(s[i]=='1' && count0>0){
        count0--;
        newlen++;
      }else{
        break;
      }
      
    }
    cout<<n-newlen<<endl;
  }
  return 0;
}