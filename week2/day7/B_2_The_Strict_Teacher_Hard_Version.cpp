#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n, m, q;
        cin >> n >> m >> q;
        vector<ll> teacher(m);
        for (int i = 0; i < m; i++)
            cin >> teacher[i];
        sort(teacher.begin(), teacher.end());

        vector<ll> student(q);
        for (int i = 0; i < q; i++)
            cin >> student[i];

        for (auto i : student) {
            auto ind = lower_bound(teacher.begin(), teacher.end(), i);

            ll closestValue;

            if (ind == teacher.begin()) {
                closestValue = abs(*ind - 1);
            } else if (ind == teacher.end()) {
                closestValue = abs(teacher.back() - n);
            } else {
                ll r = *ind;
                ind--;
                ll l = *ind;
                ll mid = (l + r) / 2;
                closestValue = min(abs(l - mid), abs(r - mid));
            }
            cout << closestValue << endl;
        }
    }
    return 0;
}
