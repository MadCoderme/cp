#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

/*
Editorial:
Let's maintain the bounds L,R — the segment of heights in which hi can currently be. Initially, L=R=0
.

Now, we will iterate from i=1 to n. We could have risen by 1, so R increases by 1. We also cannot rise above ri or drop below li,
so if R>ri, then R=ri, and if L<li, then L=li. If at any point L>R, then such an array d does not exist. Otherwise, it can be restored in reverse.

The final asymptotic complexity is O(n)
*/

/* 
My Note:

Let's keep track of current height. h = 0
For given values, change it accordingly. 
For unknown values, keep track of them to use later.
For h < lower range, it's either over or we can try to use some previous unknown values to increase h and make it at least equal to lower range.
Since, height cannot decrease, it's optimal to use the last unknown value first.
For h > higher range, it's over.
If, there are unknown values left and h + num of unknown values > higher range, we need to set some of them 0 so we don't increase them later thus making the current move impossible.
This continues for i = 0 to N
*/
int main() 
{
   int t;
   cin >> t;
   
  while (t--) {
    ll n;
    cin >> n;
    
    vector<ll> d(n);
    vector<pair<ll, ll>> obstacles(n);
    bool ispossible = true;
    
    for (auto &i: d) cin >> i;
    for (ll i = 0; i < n; i++) cin >> obstacles[i].first >> obstacles[i].second;

    ll h = 0;
    vector<ll> unknowns;
    for (ll i = 0; i < n; i++) {
      if (d[i] == 1) h++;
      else if (d[i] == -1) unknowns.push_back(i);
      
      if (i > 0 && obstacles[i].first - obstacles[i - 1].second > 1) {
        ispossible = false;
        break;
      }
      
      while (h < obstacles[i].first) {
        if (unknowns.empty()) {
          ispossible = false;
          break;
        }
        h++;
        d[unknowns.back()] = 1;
        unknowns.pop_back();
      }
      
      while (h + unknowns.size() > obstacles[i].second) {
        if (unknowns.empty()) {
          ispossible = false;
          break;
        }
        d[unknowns.back()] = 0;
        unknowns.pop_back();
      }
      
    }
    
    if (!ispossible) cout << -1;
    else {
      for (auto i : d) cout << max(0LL, i) << " ";
    }
    cout << endl;
  }
  
}
