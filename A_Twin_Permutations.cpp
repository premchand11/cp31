#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    ll tap=n+1;
    for(ll i=0;i<n;i++){
      cout<<(tap - a[i])<<endl;
    }
  }
  return 0;
}