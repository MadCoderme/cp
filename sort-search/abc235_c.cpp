#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

// 1st method

// go through the sequence of numbers provided
// for each number, track the count of its appearance
// then, in a map, store number-occurance with its index
// later for each query, just print the value from the map which is O(1)

struct Node {
  ll value = -1;
};

int main() 
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n, q;
  cin >> n >> q;
  vector<ll> a(n);
  map<ll, ll> count;
  map<string, Node> c;
  
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
    count[a[i]]++;
    string key = to_string(a[i]) + '-' + to_string(count[a[i]]);
    c[key].value = i;
  }
  for (ll i = 0; i < q; i++) {
    int x, k;
    cin >> x >> k;
    ll ans = c[to_string(x) + '-'+ to_string(k)].value;
    cout << (ans == -1 ? -1 : (ans + 1)) << endl;
  }

}

// 2nd method

// go through each number in sequence, and in a map of vector store the positions of its appearances
// later for each query, check if the appearance count is >= k which means there is an answer
// the answer would be the index stored at k - 1 of the vector

struct Node {
  vector<ll> value = {};  
};

int main() 
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n, q;
  cin >> n >> q;
  map<ll, Node> a;
  
  for (ll i = 0; i < n; i++) {
    ll k;
    cin >> k;
    a[k].value.push_back(i);
  }
  
  for (ll i = 0; i < q; i++) {
    int x, k;
    cin >> x >> k;
    ll ans = -1;
    if (a[x].value.size() >= k) ans = a[x].value[k - 1] + 1;
    cout << ans << endl;
  }

}
