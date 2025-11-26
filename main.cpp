#include <bits/stdc++.h>
using namespace std;

// Climbing Stairs: number of distinct ways to reach the top.
// Recurrence: f[n] = f[n-1] + f[n-2]
// Iterative DP for O(n) time and O(1) space.

int climbStairs(int n) {
    if (n <= 2) return n;
    int a = 1, b = 2;
    for (int i = 3; i <= n; i++) {
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    cin >> n;
    cout << climbStairs(n) << "\n";
    return 0;
}
