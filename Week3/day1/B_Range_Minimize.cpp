#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        sort(A.begin(), A.end());
        
        int min_range = A[N-1] - A[0]; 

        if (N > 1) {
            min_range = min(min_range, A[N-1] - A[1]);
        }

        if (N > 1) {
            min_range = min(min_range, A[N-2] - A[0]);
        }

        if (N > 2) {
            min_range = min(min_range, A[N-1] - A[2]);
        }

        if (N > 2) {
            min_range = min(min_range, A[N-3] - A[0]);
        }

        if (N > 2) {
            min_range = min(min_range, A[N-2] - A[1]);
        }

        cout << min_range << endl;
    }

    return 0;
}
