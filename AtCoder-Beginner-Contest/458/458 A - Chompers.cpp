#include <iostream>
using std::cin;
using std::cout;
#include <string>
using std::string;

int main (void) {
	string s;
	int n;

	cin >> s;
	cin >> n;
	
	string ans = s.substr(n, s.size() - n*2);
	cout << ans << "\n";
		

	return 0;
}
