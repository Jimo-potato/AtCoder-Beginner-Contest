#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;
  vector<int> P(N);
  vector<int> R(N);
  for (int i = 0; i < N; i++) {
    cin >> P.at(i);
    P.at(i)--;
    R.at(P.at(i)) = i;
  }
  
  for (int i = 0; i < Q; i++) {
    int a;
    cin >> a;
    a--;
    P.at(R.at(a)) = -1;
    R.at(a) = P.size();
    P.push_back(a);
  }
  
  for(auto a: P) {
    if (a != -1) {
      cout << a + 1 << ' ';
    }
  }
  cout << '\n';
}
