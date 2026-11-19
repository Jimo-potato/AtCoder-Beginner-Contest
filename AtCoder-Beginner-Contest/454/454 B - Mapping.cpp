#include <iostream>
#include <set>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  set<int> S;
  for (int i = 0; i < N; i++) {
    int F;
    cin >> F;
    S.insert(F);
  }
  cout << ((int)S.size() == N ? "Yes" : "No") << "\n";
  cout << ((int)S.size() == M ? "Yes" : "No") << "\n";
}
