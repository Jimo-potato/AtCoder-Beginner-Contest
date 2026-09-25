#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> classes(K, 0);
  for (int i = 0; i < N; i++) {
    int k;
    cin >> k;
    k--;
    classes[k]++;
  }
  sort(classes.rbegin(), classes.rend());
  
  int max = classes[0];
  int max_count = 1;
  for (int i = 1; i < K; i++) {
    if (classes[i] + 1 >= max) {
      max_count++;
    } else {
      break;
    }
  }
  cout << max_count << '\n';
}
