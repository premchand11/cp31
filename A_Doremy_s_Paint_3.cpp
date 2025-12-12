#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    map<long,long>mp;
    for(int i=0;i<n;i++){
      mp[a[i]]++;
    }
    if(mp.size()>2){
      cout<<"No"<<endl;
    }else{int freqfirst=mp.begin()->second;
    int freqsecond=mp.rbegin()->second;
    if(freqfirst==freqsecond){
      cout<<"Yes"<<endl;

    }else if(n%2==1 && abs(freqfirst - freqsecond)==1){
      cout<<"Yes"<<endl;

    }else{
      cout<<"No"<<endl;
    }
    
  }
    



  }
  return 0;
}