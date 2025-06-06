#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// cost depends on the value chosen -> choose minimum a_i
// there can be chain of equal values, which will reduce the number of values to change, thus reducing cost
// so, iterate through the list, find the longest repeated value chain that gives the minimum cost


void solve() {
  ll n;
  cin >> n;
  vector<ll> a(n);
  for (auto &i : a) cin >> i;
  
  ll min_cost = LONG_LONG_MAX;

  ll i = 0;
  while (i < n) {
    int d = 1;
    while (i < n - 1 && a[i] == a[i + 1]) {
      i++;
      d++;
    }
    min_cost = min(min_cost, a[i] * (n - d));
    i++;
  }
  
  cout << min_cost << endl;
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
