#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(3);
  for (int i = 0; i < 3; i++) {
    cin >> A.at(i);
  }
  sort(A.rbegin(), A.rend());
  cout << A.at(2) << endl;
  int last = A.at(2);
  A.pop_back();
  
  for (int i = 0; i < N - 3; i++) {
    int Ak;
    cin >> Ak;
    if (Ak < last) {
      A.push_back(last);
    } else if (Ak <= A.at(1)) {
      A.push_back(Ak);
    } else if (Ak <= A.at(0)) {
      A.insert(A.begin() + 1, Ak);
    } else {
      A.insert(A.begin(), Ak);
    }
    cout << A.at(2) << endl;
    last = A.at(2);
    A.pop_back();
  }
}

//corret answer
#include <bits/stdc++.h>
using namespace std;

int main () {
  int N;
  cin >> N;
  vector<int> d(3);
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    d.push_back(a);
    sort(d.rbegin(), d.rend());
    d.pop_back();
    if (i >= 2) {
      cout >> d.at(2) << '\n';
    }
  }
}
