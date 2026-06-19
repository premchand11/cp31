#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  int maxi=0;
  int n=s.length();
  int left=0;
  for(int right=1;right<n;right++){
    if(s[right]!=s[right-1]){
      left=right;
    }else{
      maxi=max(maxi,right-left+1);
    }

  }if(maxi==0){
    cout<<maxi+1;
  }else{
    cout<<maxi;
  }
}