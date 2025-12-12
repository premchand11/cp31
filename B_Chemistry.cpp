#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
  long long t;
  cin>>t;
  while(t--){
    long long n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int>freq(26,0);
    for(int i=0;i<n;i++){
      freq[s[i]-'a']++;
    }
    long long oddfr=0;
    for(int i=0;i<26;i++){
      oddfr+=freq[i]%2;
    }
    if(oddfr>k+1){
      cout<<"NO"<<endl;
    }else{
      cout<<"YES"<<endl;
    }
    
  }
  return 0;

}