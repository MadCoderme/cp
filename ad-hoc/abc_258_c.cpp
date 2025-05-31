#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


/*
keep track of number of rotations to make.
manipulating the string would be slow.
then, find which character is now at the first position after rotations. call it head
we need to print the character head + x from original string
head + x will go beyond n when x > number of rotations
so, we will wrap it up with a modulo n
*/

int main() 
{
   int n, q;
   cin >> n >> q;
   string s;
   cin >> s;
   
   
    
  ll p = 0;
  while (q--) {
    ll t, x;
    cin >> t >> x;
    if (t == 1) {
      p += x;
    } else {
      ll eff = p % n;
      ll head = (n - eff) % n;
      ll i = (head + x - 1) % n;
      cout << s[i] << endl;
    }
    
    
  }
  
}
