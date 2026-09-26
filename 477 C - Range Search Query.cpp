#include <bits/stdc++.h>
using namespace std;

int main() {
  int Q;
  cin >> Q;
  string S, T;
  cin >> S >> T;
  int Slong = S.size();
  int Tlong = T.size();
  vector<int> A;
  for (int i = 0; i < Slong; i++) {
    for (int j = 0; j < Tlong; j++) {
      if (S[i + j] != T[j]) {
        break;
      }
      if (S[i + j] == T[j] and j == Tlong - 1) {
        A.push_back(i);
      }
    }
  }
  
  for (int i = 0; i < Q; i++) {
    int L, R;
    bool ans = false;
    cin >> L >> R;
    int left = 0, right = A.size() - 1;
    while (left <= right) {
      int mid = left + (right - left) / 2;
      if (L - 1 <= A[mid] and A[mid] <= R - Tlong) {
        ans = true;
        break;
      } else if (R - T.size() < A[mid]) {
        right = mid - 1;
      } else {
        left = mid + 1;
      }
    }
    if (ans == true) {
      cout << "Yes" << '\n';
    } else {
      cout << "No" << '\n';
    }
  }
}
