#include <bits/stdc++.h>
using namespace std;

int main() {
    int K;
    cin >> K;
    int target, a;
    bool foundNine = false;
    for (int i = 0; i < K; i++) {
        cin >> a;
        if (a == 9) {
            foundNine = true;
        }
        if (i == 0) {
            target = a;
        } else {
            target = min(target, a);
        }
    }
    if (foundNine) {
        cout << target << endl;
    } else {
        cout << "-1" << endl;
    }
}

// correct answer
#include<bits/stdc++.h>

using namespace std;

int main(){
  int K;
  cin >> K;
  vector<int> bk(10,0);
  for(int i=0;i<K;i++){
    int A;
    cin >> A;
    bk[A]=1;
  }
  if(bk[9]==0){cout << "-1\n"; return 0;}
  for(int i=1;i<=9;i++){
    if(bk[i]==1){
      cout << i << "\n";
      return 0;
    }
  }
  return 0;
}
