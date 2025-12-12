#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
  long long t;
  cin>>t;
  while(t--){
    long long x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(y1>y2){
      cout<<-1<<endl;
      continue;
    }
    int count;
    count=y2-y1;
    x1=x1+count;
    if(x2>x1){
      cout<<-1<<endl;
      continue;
    }
    count=count+(x1-x2);
    cout<<count<<endl;
  }
  return 0;
}