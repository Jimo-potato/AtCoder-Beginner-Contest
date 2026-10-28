#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> giftCount(N, 0);
    vector<vector<int>> giftPerson(N);
    for (int i = 0; i < N; i++) {
        int K;
        cin >> K;
        for (int j = 0; j < K; j++) {
            int A;
            cin >> A;
            A--;
            giftPerson[A].push_back(i + 1);
            giftCount[A]++;
        }
    }
    for (int i = 0; i < N; i++) {
        sort(giftPerson[i].begin(), giftPerson[i].end()); // i+1番目からpush_backしているためsortは不要
        cout << giftCount[i] << " ";
        for (int j = 0; j < giftCount[i]; j++) {
            cout << giftPerson[i][j] << " ";
        }
        cout << endl;
    }
}