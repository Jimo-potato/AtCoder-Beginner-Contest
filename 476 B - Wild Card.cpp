#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  string S, T;
  cin >> S >> T;
  bool can = true;
  
  for (int i = 0; i < N; i++) {
    if (T[i] != '*') {
      if (T[i] != S[i]) {
        can = false;
      }
    }
  }
  
  if (can) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
