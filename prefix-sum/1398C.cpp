#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

// create the prefix sum array
// a subarray will be good if p_r - p_l = r - l
// here, p_r - p_l is the subarray sum, r - l is the length of that subarray
// rearrange, p_r - r = p_l - l
// so, we need to keep track of p_i - i
// now, for 0 index, subarray sum is sums[i] - sums[j - 1] and array length is i - j + 1
// rearrange,  sums[i] - i - 1 = sums[j - 1] - j

int main() 
{
   int t;
   cin >> t;
   
  while (t--) {
    ll n;
    cin >> n;
    string num;
    cin >> num;
    
    map<ll, ll> sums;
    sums[0] = 1;
    
    ll prefix_sum = 0, c = 0;
    
    for (ll i = 0; i < n; i++) {
      prefix_sum += num[i] - '0';
      
      c += sums[prefix_sum - i - 1]; 
      
      sums[prefix_sum - i - 1]++;
    }
    
    cout << c << endl;
  }
  
}
