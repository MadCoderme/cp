// First of all, note that we can add an element with index i
//  to an element with index j
//  iff i<j
// . This means that the element an
//  cannot be added to any other element because there is no index j>n
//  in the array. This is why we can first equalize the elements an
//  and bn
// . If an=bn
// , they are already equal. If an<bn
// , then we need to have element equal to 1
//  along the elements a
//  with indexes {1,...,n−1}
// . For an>bn
// , we need to have −1
//  along these elements. After the elements with index n
//  become equal, we can go to the element with index n−1
//  and do the same. Then indexes n−2
// , n−3
// , ..., 1
// . You can implement this idea yourself!

// Final time complexity: O(n)
  
#include <iostream>
#include <vector>
#include <numeric>

void solve() {
    int n;
    std::cin >> n;
    std::vector<long long> a(n), b(n);
    for (int i = 0; i < n; ++i) std::cin >> a[i];
    for (int i = 0; i < n; ++i) std::cin >> b[i];

    bool can_increase = false; // Have we seen a '1' yet?
    bool can_decrease = false; // Have we seen a '-1' yet?

    for (int i = 0; i < n; ++i) {
        // Check if the transformation for the current index is possible
        if (a[i] < b[i] && !can_increase) {
            std::cout << "NO\n";
            return;
        }
        if (a[i] > b[i] && !can_decrease) {
            std::cout << "NO\n";
            return;
        }

        // After checking, update our capabilities for future elements
        if (a[i] == 1) {
            can_increase = true;
        }
        if (a[i] == -1) {
            can_decrease = true;
        }
    }

    std::cout << "YES\n";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
