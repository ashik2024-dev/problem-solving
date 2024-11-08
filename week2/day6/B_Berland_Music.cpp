#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++)
            cin >> p[i];

        string s;
        cin >> s;

        vector<pair<int,int>> like;
        vector<pair<int,int>> disLike;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1')
                like.push_back({p[i], i});
            else
                disLike.push_back({p[i], i});
        }

        sort(like.begin(), like.end(), greater<pair<int,int>>());

        sort(disLike.begin(), disLike.end(), greater<pair<int,int>>());

        // for(auto i:like)
        //     cout << i.first << " " << i.second << endl;

        vector<int> q(n);
        int current_rating = n;

        for (auto i : like) {
            q[i.second] = current_rating;
            current_rating--;
        }

        for (auto i : disLike) {
            q[i.second] = current_rating;
            current_rating--;
        }

        for (int i = 0; i < n; ++i) {
            cout << q[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
