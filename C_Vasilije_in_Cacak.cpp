#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
  long long t;
  cin>>t;
  while(t--){
    long long n,k,x;
    cin>>n>>k>>x;
    long long mini=(k*(k+1))/2;
    long long maxi=((n*(n+1))/2)-(((n-k)*(n-k+1))/2);

    if(x>=mini && x<=maxi){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}