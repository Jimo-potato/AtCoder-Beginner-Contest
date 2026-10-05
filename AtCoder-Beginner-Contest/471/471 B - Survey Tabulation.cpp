#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> S(N);
    vector<int> A(N, 0);
    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;
        bool found = false;
        for (int j = 0; j < N; j++) {
            if (S[j] == str) {
                A[j]++;
                found = true;
                break;
            }
        }
        if (found != true) {
            S[i] = str;
            A[i]++;
        }
    }

    int max_count = 0;
    for (int i = 0; i < N; i++) {
        max_count = max(max_count, A[i]);
    }
    cout << max_count << endl;
}

// correct answer
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<string>s(n);
	for(int i=0;i<n;i++)cin >> s[i];
	
	map<string,int>count;
	for(int i=0;i<n;i++){
		for(int j=0;j<s[i].size();j++)if('A'<=s[i][j]&&s[i][j]<='Z')s[i][j]^=32;
		count[s[i]]++;
	}
	
	int ans=0;
	for(auto[k,v]:count)ans=max(ans,v);
	cout << ans << endl;
}
