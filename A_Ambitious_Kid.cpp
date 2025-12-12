#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long mini=INT_MAX;
    vector<long long>a(n);
    for(long long i=0;i<n;i++){
        cin>>a[i];
  }
  for(long long i=0;i<n;i++){
    long long abs_val=abs(a[i]);
    mini=min(mini,abs_val);
  }
  cout<<mini<<endl;

}
