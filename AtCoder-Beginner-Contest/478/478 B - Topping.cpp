#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, V;
    cin >> N >> V;
    vector<int> W(N);
    for (int i = 0; i < N; i++) {
        cin >> W[i];
    }

    int Wmax = 0, icount = 0;
    vector<int> HoldTop3(3, 0);
    for (int i = 0; i < N; i++) {
        if (icount < V ) {
            HoldTop3.push_back(W[i]);
            sort(HoldTop3.begin(), HoldTop3.end(), greater<int>());
            for (int j = 0; j < N; j++) {
                if (HoldTop3[3] == W[j]) {
                    icount = icount - j + i;
                }
            }
            HoldTop3.pop_back();
            
        }
    }
    Wmax = HoldTop3[0] + HoldTop3[1] + HoldTop3[2];
    cout << Wmax << endl;
}

// correct answer
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, V;
    cin >> N >> V;
    vector<int> W(N);
    for (int i = 0; i < N; i++) cin >> W[i];

    int ans = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                if (i + j + k + 3 <= V) {
                    ans = max(ans, W[i] + W[j] + W[k]);
                }
            }
        }
    }

    cout << ans << endl;
}
