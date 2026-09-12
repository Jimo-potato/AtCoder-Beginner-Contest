#include <bits/stdc++.h>
using namespace std;

int main() {
  string a;
  cin >> a;
  int n = a.size();
  for (int i = 0; i < n - 1; i++) {
    cout << a[i] << "o";
  }
  cout << a[n-1] << endl;
}
