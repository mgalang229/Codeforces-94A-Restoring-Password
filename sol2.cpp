
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	int n = 10;
	map<string, char> mp;
	for (int i = 0; i < n; i++) {
		string digit;
		cin >> digit;
		// store the corresponding equivalent digit of the string
		mp[digit] = (char) 48 + i;
	}
	string ans = "";
	for (int i = 0; i < (int) s.size(); i += 10) {
		// get the equivalent digit of every 10-character substring
		ans += (char) mp[s.substr(i, 10)];
	}
	cout << ans << '\n';
	return 0;
}
