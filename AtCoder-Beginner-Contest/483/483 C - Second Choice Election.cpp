#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> Candidates(N, 0);
    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        A--;
        B--;
        Candidates[A]++;
        Candidates[B]++;
    }
    int maxNum = -1, maxSecondNum = -1;
    vector<int> d(2);
    for (int i = 0; i < N; i++) {
        cout << Candidates[i] << " ";
        d.push_back(Candidates[i]);
        sort(d.rbegin(), d.rend());
        d.pop_back();
        if (Candidates[i] > d[0]) {
            if (maxNum != 0) {
                maxSecondNum = maxNum;
            }
            maxNum = i;
        } else if (Candidates[i] > d[1]) {
            maxSecondNum = i;
        }
    }
    for (int i = 0; i < N; i++) {
        if (i == maxNum) {
            cout << maxSecondNum + 1 << endl;
        } else {
            cout << maxNum + 1 << endl;
        }
    }
}