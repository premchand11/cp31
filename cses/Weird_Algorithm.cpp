#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int main(){
  long long n;
  cin>>n;
  cout<<n;
  cout<<" ";
  while(n!=1){
    if(n%2==0){
      n=n/2;
      cout<<n;
      cout<<" ";
    }else{
      n=(n*3)+1;
      cout<<n;
      cout<<" ";
    }
  }

}