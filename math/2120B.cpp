#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Any ball on the diagonals of the square that is shot towards a pocket will be potted on a free table.
// Any ball that collides with an edge will be in a 4 periodic path colliding with the 4 edges forever on a free table.
// The collisions are elastic, so if two balls collide, they exchange their directions.
// ★ Neither collisions affect the effective number of balls traversing towards a pocket.
// Therefore, the answer is the number of balls initially on the diagonals of the square and shot towards the pockets.
// Use straight line geometry to find inputs that satisfy this condition

int main() 
{
   int t;
   cin >> t;
   while(t--){
     ll n, s;
     cin >> n >> s;
     
     ll c = 0;
     for (ll i = 0; i < n; i++) {
       ll d_x, d_y, x, y;
       cin >> d_x >> d_y >> x >> y;
       
       if (x == y && d_x == d_y) c++;
       else if (x + y == s && d_x != d_y) c++;
     }
     
     cout << c << endl;
   }
  return 0;
}
