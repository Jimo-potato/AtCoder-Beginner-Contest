#include <iostream>
using std::cin;
using std::cout;

int main (void) {
	int h, w;
	cin >> h >> w;

	int ans[h][w];
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			ans[i][j] = 0;

			if (i-1 >= 0) ans[i][j]++;
			if (i+1 <  h) ans[i][j]++;
			if (j-1 >= 0) ans[i][j]++;
			if (j+1 <  w) ans[i][j]++;
		}
	}

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (j > 0) { cout << " "; }
			cout << ans[i][j];
		}
		cout << "\n";
	}

	return 0;
}
