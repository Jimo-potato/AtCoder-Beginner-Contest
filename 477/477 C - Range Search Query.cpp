#include <bits/stdc++.h>
using namespace std;

int main() {
  int Q;
  cin >> Q;
  string S, T;
  cin >> S >> T;
  int Slong = S.size();
  int Tlong = T.size();
  vector<int> A;
  for (int i = 0; i < Slong; i++) {
    for (int j = 0; j < Tlong; j++) {
      if (S[i + j] != T[j]) {
        break;
      }
      if (S[i + j] == T[j] and j == Tlong - 1) {
        A.push_back(i);
      }
    }
  }
  
  for (int i = 0; i < Q; i++) {
    int L, R;
    bool ans = false;
    cin >> L >> R;
    int left = 0, right = A.size() - 1;
    while (left <= right) {
      int mid = left + (right - left) / 2;
      if (L - 1 <= A[mid] and A[mid] <= R - Tlong) {
        ans = true;
        break;
      } else if (R - T.size() < A[mid]) {
        right = mid - 1;
      } else {
        left = mid + 1;
      }
    }
    if (ans == true) {
      cout << "Yes" << '\n';
    } else {
      cout << "No" << '\n';
    }
  }
}

// correct answer
#include<bits/stdc++.h>
#define int long long
using namespace std;
int T,l,r,a[4000010];
string s,t;
signed main()
{
    cin>>T>>s>>t;
	if(s.size()<t.size())
	{
		while(T--)cout<<"No\n";
		return 0;
	}
	for(int i=0;i<s.size()-t.size()+1;i++)
	{
		if(s.substr(i,t.size())==t)a[i+1]=1;
	}
	for(int i=1;i<=s.size();i++)a[i]+=a[i-1];
	while(T--)
	{
		cin>>l>>r;
		if(r-l+1<t.size())cout<<"No\n";
		else if(a[r-t.size()+1]-a[l-1])cout<<"Yes\n";
		else cout<<"No\n";
	}
    return 0;
}
