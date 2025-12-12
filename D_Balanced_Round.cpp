#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n,k;
    cin>>n>>k;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
      cin>>nums[i];
    }
    sort(nums.begin(),nums.end());
    int maxi=1;
    int cnt=1;
    for(int i=1;i<n;i++){
      if(nums[i]-nums[i-1]<=k){
        cnt++;
      }else{
        cnt=1;
      }
      maxi=max(maxi,cnt);
    }

    cout<<(n-maxi)<<endl;

  }
  return 0;
}