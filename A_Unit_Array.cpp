#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int pos=0;
    int neg=0;
    for(int num:a){
      if(num>0) pos++;
      else if(num<0) neg++;
    }
    long long operations=0;
    while(pos<neg || neg%2!=0){
      operations++;
      pos++;
      neg--;
    }
    cout<<operations<<endl;
  }
  return 0;
}