#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 0;
    cin >> t;
    long long x, y;
    while(t--) {
        cin >> x >> y;
        //cout << x <<  " " << y << endl;
        // two conditions
        // 2x - y >=0 and multiple of 3 and 
        // 2y -x >= 0 and mulitple of 3
        if ((2*x - y >= 0) && ((2*x - y)%3 == 0)
            && (2*y - x >= 0) && ((2*y - x)%3 == 0)){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
