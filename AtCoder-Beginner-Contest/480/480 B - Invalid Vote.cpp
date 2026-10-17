#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<string> S(N);
    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }
    
    vector<int> votes(N, 0);
    for (int i = 0; i < M; i++) {
        string T;
        cin >> T;
        int index;
        int same_count = 0;
        for (int j = 0; j < N; j++) {
            if (S[j] == T) {
                votes[j]++;
                goto next_vote;
            } 
        }

        for(int j = 0; j < N; j++) {
            int same = 0;
            for (int k = 0; k < size(T); k++) {
                if (S[j][k] == T[k]) {
                    same++;
                }
            }
            if (size(S[j]) - same == 1 && size(S[j]) == size(T)) {
                same_count++;
                index = j;
            }
        }
        if (same_count == 1) {
                votes[index]++;
        }
        next_vote:
    }

    for (int i = 0; i < N; i++) {
        cout << votes[i] << endl;
    }
}

// correct answer
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<string> S(N);
    vector<string> T(M);

    for (int i = 0; i < N; i++) cin >> S[i];
    for (int j = 0; j < M; j++) cin >> T[j];

    vector<int> ans_lst(N, 0);

    for (int j = 0; j < M; j++) {
        auto it = find(S.begin(), S.end(), T[j]);

        if (it != S.end()) {
            ans_lst[it - S.begin()]++;
        } else {
            vector<int> I;

            for (int i = 0; i < N; i++) {
                if (S[i].size() == T[j].size()) {
                    int diff = 0;
                    for (int k = 0; k < (int)S[i].size(); k++) {
                        if (S[i][k] != T[j][k]) diff++;
                    }

                    if (diff == 1) {
                        I.push_back(i);
                    }
                }
            }

            if (I.size() == 1) {
                ans_lst[I[0]]++;
            }
        }
    }

    for (int x : ans_lst) {
        cout << x << '\n';
    }

    return 0;
}