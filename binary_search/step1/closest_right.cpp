/*
 * Codeforces Edu: ITMO Pilot Course - Binary Search
 * Practice Step 1 - C. Closest to the Right 
 * author: rare_occasions
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    

    // Fast I/O
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    while (k--) {
        int x;
        cin >> x;
        
        int l = 0;          // invariant: a[l] < x
        int r = n + 1;      // invariant: a[r] >= x
        while (r > l + 1) {
            int m = (l + r) / 2;
            if (a[m] < x) {
                l = m;
            } else {
                r = m;
            }
        }

        cout << r << '\n';
    }

    return 0;
}
