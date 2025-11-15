#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()

const ll INF = 1e18;
const int MOD = 1e9 + 7; // Change if needed
const ld EPS = 1e-9;

#ifdef LOCAL
    #define dbg(x) cerr << #x << " = " << x << "\n";
#else
    #define dbg(x)
#endif


void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

ll mod_add(ll a, ll b, ll m = MOD) {
    a %= m; b %= m;
    return (a + b) % m;
}

ll mod_sub(ll a, ll b, ll m = MOD) {
    a %= m; b %= m;
    return (a - b + m) % m;
}

ll mod_mul(ll a, ll b, ll m = MOD) {
    return (a % m) * (b % m) % m;
}

ll mod_pow(ll a, ll e, ll m = MOD) {
    ll res = 1 % m; a %= m;
    while (e > 0) {
        if (e & 1) res = mod_mul(res, a, m);
        a = mod_mul(a, a, m);
        e >>= 1;
    }
    return res;
}

ll mod_inv(ll a, ll m = MOD) {
    return mod_pow(a, m - 2, m);
}

template<class T>
void read(vector<T>& v) {
    for (auto &x : v) cin >> x;
}

void solve() {
    // solve
    ll n, q;
    cin >> n >> q;
    string s = "";
    char cm;
    bool is_b = false;
    for (ll i = 0; i < n; i++) {
        cin >> cm;
        if (cm == 'B') is_b = true;
        s += cm;
    }

    while (q--) {
        ll a, sec = 0;
        cin >> a;
        if (!is_b) {
            cout << a << "\n";
            continue;
        }
        while (a > 0) {
            for (char c : s) {
                if (a == 0) break;
                if (c == 'A') a--;
                else if (c == 'B') a = floor(a/2);
                sec++;
            }
        }
        cout << sec << "\n";
    }
}


int main() {
    fast_io();
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
