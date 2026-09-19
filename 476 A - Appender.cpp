#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int n = S.size();
  if (S[n-1] == 'e') {
    cout << S << 'r' << endl;
  } else {
    cout << S << "er" << endl;
  }
}
