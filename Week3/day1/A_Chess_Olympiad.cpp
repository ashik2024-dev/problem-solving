#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int x, y, z;
    cin >> x >> y >> z;

    double a_score = x*1;
    double b_score = z*1;
    a_score += y*0.5;
    b_score += y*0.5;

    double gm_score = 4 - (x + y + z);
    a_score += gm_score*1;

    
    if (a_score > b_score)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}

