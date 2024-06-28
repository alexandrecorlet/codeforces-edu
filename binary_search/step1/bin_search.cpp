/*
 * Codeforces Edu: ITMO Pilot Course - Binary Search
 * Practice Step 1 - A. Binary Search
 * author: rare_occasions
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    while (k--) {
        int x;
        cin >> x;
        
        int l = -1;
        int r = n;
        while (r > l + 1) {
            int mid = (l + r) / 2;
            if (a[mid] <= x) {
                l = mid;
            } else {
                r = mid;
            }
        }

        if (a[l] == x) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }

    }

    return 0;
}

