#include <iostream>
#include <vector>

int main() {
    using namespace std;
    int N, K;
    cin >> N >> K;

    vector<int> path(N);
    [N, K](this auto self, int index, int sum, vector<int>& path) -> void {
        if (index + 1 == N) { // 最後の 1 項になったら
            if ((K - sum) % N == 0) { // 合計を K にできるときのみ
                path.back() = (K - sum) / N;
                for (int p : path) // 出力
                    cout << p << ' ';
                cout << '\n';
            }
            return;
        } 

        // i 項目を決めて再帰
        for (int i = 0; sum + i * (index + 1) <= K; ++i) {
            path[index] = i;
            self(index + 1, sum + i * (index + 1), path);
        }
    }(0, 0, path);
    
    return 0;
}
