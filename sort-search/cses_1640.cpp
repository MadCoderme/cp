#include <iostream>
#include <map>
using namespace std;

// One way to solve the problem is to go through the array and use a map structure to store the index of each value. 
// When the current value is a, we can check if we have already seen a value x-a, in which case we have found a solution.
// shorter and simpler than two-pointer

int main() {
    int n, x;
    cin >> n >> x;
    map<int, int> m;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        if (m[x - a]) {
            cout << m[x - a] << " " << i << "\n";
            return 0;
        }
        m[a] = i;
    }
    cout << "IMPOSSIBLE\n";
}
