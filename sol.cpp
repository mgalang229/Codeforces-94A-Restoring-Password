#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	int n = 10;
	vector<string> digits(10);
	for (int i = 0; i < n; i++) {
		cin >> digits[i];
	}
	string ans = "";
	for (int i = 0; i < (int) s.size(); i += 10) {
		// convert every string with 10 characters with its
		// corresponding equivalent digit in the given
		string pattern = s.substr(i, 10);
		for (int j = 0; j < n; j++) {
			if (pattern == digits[j]) {
				ans += (char) 48 + j;
			}
		}
	}
	cout << ans << '\n';
	return 0;
}
