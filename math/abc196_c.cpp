#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

// we only need to count even digit numbers.
// for all the numbers of same digit count, there is a pattern like: 100-100, 101-101, 102-102,...
// so, there are basically 9 * 100 numbers that match our criteria among all 6 digits numbers
// we can calculate like this for upto len(n) - 1 digit count numbers
// then, we have to count how many numbers match our criteria from 10^(len(n) - 1) to n
// this can be solved looking at the pattern once again

int main() 
{
  string n;
  cin >> n;

  if (n.length() % 2 == 1) {
    n = string(n.length() - 1, '9');
    if (n.empty()) { 
        cout << 0 << endl;
        return 0;
    }
  }

  ll p = n.length() / 2 - 1;
  ll total = 0;

  for (ll i = 0; i < p; i++) {
    total += 9 * pow(10, i);
  }

  ll half = stoll(n.substr(0, n.length() / 2)) - pow(10, p) + 1;

  if (stoll(n) < stoll(n.substr(0, n.length() / 2) + n.substr(0, n.length() / 2))) half--;
  total += half;

  cout << total;

}
