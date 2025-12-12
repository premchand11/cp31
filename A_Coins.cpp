#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
  long long t;
  cin>>t;
  while(t--){
    long long n,m;
    cin>>n>>m;
    if(n%2==0 || (m-n)%2==0){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
  }return 0;
}