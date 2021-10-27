#include <bits/stdc++.h>

using namespace std;


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    //cout << "Bit strings .. " << endl;
    int n;
    cin >> n;

    int mod = 1000000000 + 7;
    long long ans = 1;
    for(int i = 1; i <= n; i++) {
        ans = (long long) ((2 * ans) % mod);
    }
    cout << ans << endl;
        

    return 0;
}
