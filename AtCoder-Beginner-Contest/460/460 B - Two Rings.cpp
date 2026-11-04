#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    long long x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    auto sq = [](long long x) { return x * x; };
    auto L = sq(r1 - r2);
    auto M = sq(x1 - x2) + sq(y1 - y2);
    auto R = sq(r1 + r2);
    cout << (L <= M and M <= R ? "Yes" : "No") << "\n";
  }
}
