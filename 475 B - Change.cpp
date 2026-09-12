#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t n;
  cin >> n;
  int64_t one = 0, ten = 0, hundred = 0;
  int64_t cost, oturi;
  
  for (int i = 0; i < n; i++) {
    cin >> cost;
    oturi = 1000 - (cost % 1000);
    hundred += oturi / 100;
    ten += (oturi % 100) / 10;
    one += oturi % 10;
  }
  
  cout << one << " " << ten << " " << hundred << endl;
}
