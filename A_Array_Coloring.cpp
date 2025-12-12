#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int count=0;
    for(int i = 0; i < n; i++){
      if(a[i]%2 == 1){
        count++;
        
      }
    }
    if(count%2 == 1){
      cout<<"NO" << endl;
    }else{
      cout<<"YES" << endl;
    }
  }
  return 0;

}