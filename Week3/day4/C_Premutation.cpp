#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int matrix[n + 1][n];
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j < n; j++) {
                cin >> matrix[i][j];
            }
        }
        map<int, int> mp;
        map<int, int> m;
        for (int i = 1; i <= n; i++) {
            mp[matrix[i][n - 1]] = i;
            m[matrix[i][n - 1]]++;
        }
        int idx = 0, val;
        for (auto u : m) {
            if (u.second == 1) idx = u.first;
            else val = u.first;
        }
        for (int i = 1; i < n; i++) {
            cout << matrix[mp[idx]][i] << " ";
        }
        cout << val << endl;
    }
    return 0;
}
