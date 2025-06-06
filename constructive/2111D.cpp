#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// finding the first pair for each group is enough, we can repeat that 3 times to get 6 classes
// to maximize distance between floors, we pair up the highest floor with the lowest floor
// for each such pair, we can also create another schedule with the lowerst floor and highest floor

void solve() {
  ll n, m;
  cin >> n >> m;
  
  vector<ll> a(m);
  for (auto &i : a) cin >> i;
  
  sort(a.begin(), a.end());
  vector<pair<ll, ll>> pairs;
  
  for (ll i = 0; i < ceil((float)n/2); i++) {
    pairs.push_back({a[i], a[m - 1 - i]});
    pairs.push_back({a[m - 1 - i], a[i]});
  }
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) cout << pairs[i].first << " " << pairs[i].second << " ";
    cout << endl;
  }
  
}

int main() 
{
   int t;
   cin >> t;
   while(t--) {
     solve();
     
   }
    return 0;
}
