#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    long long K;
    cin >> K;
    vector<long long> A(N), Astack(N, 0);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        int j = max(i - M + 1, 0);
        if (A[i] + Astack[j] <= K) {
            cout << "Yes" << endl;
            Astack[i] += A[i];
        } else {
            cout << "No" << endl;
        }
    }
}

// correct answer
#include <bits/stdc++.h>
using namespace std;
int main() {
  int N, M;
  long long K;
  cin >> N >> M >> K;
  vector<int> A(N);
  for (auto &v : A) cin >> v;
  long long sum = 0;
  for (int i = 0; i < N; i++) {
    if (i >= M) sum -= A[i - M];
    if (sum + A[i] <= K) {
      sum += A[i];
      cout << "Yes\n";
    } else {
      A[i] = 0;
      cout << "No\n";
    }
  }
}
