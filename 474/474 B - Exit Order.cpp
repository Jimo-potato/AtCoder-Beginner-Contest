#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> P(10);
  
  int p = N / 10;
  int q = N % 10;
  
  for (int i = 0; i < p; i++) {
    for (int j = 0; j < 10; j++) {
      cin >> P.at(j);
    }
    sort(P.begin(), P.end());
    for (int j = 0; j < 10; j++) {
      if (P.at(j) != (j + 1) + 10 * i) {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  
  vector<int> Q(q);
  for (int i = 0; i < q; i++) {
    cin >> Q.at(i);
  }
  sort(Q.begin(), Q.end());
  for (int i = 0; i < q; i++) {
    if (Q.at(i) != (i + 1) + 10 * p) {
      cout << "No" << endl;
      return 0;
    }
  }
  
  cout << "Yes" << endl;
}

/*
correct answer

#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int> P(N);
    string ans="Yes";
    for(int i=0;i<N;i++){
        cin>>P[i];
        if(i/10!=(P[i]-1)/10){
            ans="No";
        }
    }
    cout<<ans<<"\n";
}

*/
