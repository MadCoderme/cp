#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// mark the ones that are possible and subtract from N
// we iterate through the bases from 2 to sqrt(N)
// we don't need to check bases above sqrt(N)
// for each base, we mark the powers that are within the range N
// to avoid redundant calculations, we mark the powers that are already checked
// allocate memory for this only of sqrt(N) size

int main() 
{
   ll n;
   cin >> n;
   
   ll upper_bound = sqrt(n);
   vector<bool> nums(upper_bound + 1, true);
   
   
   ll c = 0;
   for (ll i = 2; i <= sqrt(n); i++) {
     if (nums[i - 1] == false) continue;
     
     ll j = i * i;
     while (j <= n) {
       if (j - 1 <= upper_bound + 1) nums[j - 1] = false;
       j *= i;
       c++;
     }
   }
   
   cout << n - c;
   
   return 0;
}
