#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        
        char typeA = a.back();
        char typeB = b.back();

        if (typeA != typeB) {
            if (typeA == 'S') cout << "<\n";
            else if (typeB == 'S') cout << ">\n";
            else if (typeA == 'M') cout << "<\n";
            else cout << ">\n";
        } else {
            int countAX = count(a.begin(), a.end(), 'X');
            int countBX = count(b.begin(), b.end(), 'X');

            if (typeA == 'S') {
                if (countAX < countBX) cout << ">\n";
                else if (countAX > countBX) cout << "<\n";
                else cout << "=\n";
            } else if (typeA == 'L') {
                if (countAX > countBX) cout << ">\n";
                else if (countAX < countBX) cout << "<\n";
                else cout << "=\n";
            } else {
                cout << "=\n";
            }
        }
    }

    return 0;
}
