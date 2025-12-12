#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long a,b;
    cin>>a>>b;
    long long k1,k2;
    cin>>k1>>k2;
    long long q1,q2;
    cin>>q1>>q2;
    set<pair<long long,long long>>king,queen;

    int dx[4]={-1,-1,1,1};
    int dy[4]={-1,1,1,-1};
    for(int i=0;i<4;i++){
      king.insert({k1+dx[i]*a,k2+dy[i]*b});
      king.insert({k1+dx[i]*b,k2+dy[i]*a});
      queen.insert({q1+dx[i]*a,q2+dy[i]*b});
      queen.insert({q1+dx[i]*b,q2+dy[i]*a});
    }
    int cnt=0;
    for(auto pos:king){
      if(queen.find(pos)!=queen.end()){
        cnt++;
      }
    }
    cout<<cnt<<endl;
  }
  return 0;
}