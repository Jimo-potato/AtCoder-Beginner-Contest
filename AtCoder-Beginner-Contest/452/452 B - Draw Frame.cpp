#include <iostream>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (i == 0 || i == H - 1 || j == 0|| j == W - 1) { // 端のマスなら
                cout << '#'; // # を
            } else { // そうでなければ
                cout << '.'; // . を出力
            }
        }
        cout << endl; // 改行する
    }

    return 0;
}
