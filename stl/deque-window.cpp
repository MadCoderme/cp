#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// Deque window with monotonic queue

int main() 
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while(t--){
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (auto &i : a) cin >> i;
    
    deque<ll> w;
    for (ll i = 0; i < n; i++) {
      // ensures the window doesnt hold elements outside of boundary
      if (!w.empty() && w.front() <= i - k) w.pop_front();
      // remove all small elements from back so the front is the largest one
      while (!w.empty() && a[w.back()] <= a[i]) w.pop_back();
      w.push_back(i);
      
      if (i >= k - 1) cout << a[w.front()] << " ";
    }
    cout << endl;
  
  }
  
  return 0;
}
