#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, D;
  cin >> N >> D;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  int count = 0;
  vector<int> K;
  for (int i = 0; i < N; i++) {
    bool can = true;
    for (int j = 0; j < N; j++) {
      if (abs(A[i] - A[j]) < D and i != j) {
        can = false;
      }
    }
    if (can) {
      K.push_back(i + 1);
      count++;
    }
  }
  sort(K.begin(), K.end());
  if (count == 0) {
    cout << '0' << endl;
  } else {
    cout << count << endl;
    for (int i = 0; i < count; i++) {
      cout << K[i] << ' ';
    }
  }
}
