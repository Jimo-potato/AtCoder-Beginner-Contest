#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  string s;
  bool flag=false;
  cin >> n >> s;
  for(auto &nx : s){
    if(nx=='o'){
      if(flag){
        cout << nx;
      }
    }
    else{
      flag=true;
      cout << nx;
    }
  }
  cout << "\n";
  return 0;
}
