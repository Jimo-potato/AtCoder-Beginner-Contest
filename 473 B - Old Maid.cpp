#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(100, 0);
  int sum = 0;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    a--;
    A[a]++;
  }
  for (int i = 0; i < 100; i++) {
    if (A[i] % 2 != 0) {
      sum += i + 1;
    }
  }
  cout << sum << '\n';
}
