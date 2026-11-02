#include <bits/stdc++.h>
using namespace std;
int main() {
	int x;
	cin >> x;
	x--;
	string s = "HelloWorld";
	s.erase(s.begin() + x);
	cout << s << endl;
	return 0;
}
