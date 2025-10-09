// ## The Key Insight
// The reason it's not O(n^2) is that the inner pointer j is never reset.
// The outer loop pointer i moves forward one step at a time, for a total of n steps.
// The inner loop pointer j also only ever moves forward. It picks up where it left off in the previous iteration.
// This works because, when j stops at a position for a specific i, it must reach there or beyond for i + 1. so we don't need to start iteration from i + 2 next time.
  
#include <bits/stdc++.h>
using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int ans = 0;
	int j = 0;
	for (int i = 0; i < n; ++i) {
		while (j < n && a[j] - a[i] <= 5) {
			++j;
			ans = max(ans, j - i);
		}
	}
	
	cout << ans << endl;
	
	return 0;
}
