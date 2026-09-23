#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N), B(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  for (int i = 0; i < N; i++) {
    cin >> B[i];
  }
  
  vector<int> W(N, 1);
  int flag;
  bool can = false;
  for (int i = 0; i < N; i++) {
    if (A[i] > B[i]) {
      can = true;
      flag = i;
    }
  }
  
  if (can) {
    cout << "Yes" << '\n';
    for (int i = 0; i < N; i++)
    if (i == flag) {
      cout << "1000000000000000000" << ' ';
    } else {
      cout << W[i] << ' ';
    }
  } else {
    cout << "No" << '\n';
  }
}
