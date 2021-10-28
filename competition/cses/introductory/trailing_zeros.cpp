#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    //cout << "Trailing zeros ... " << endl;
    int n;

    cin >> n;
    //cout << "Number: " << n << endl;
    //
    // count only 5's 25's 125's
    int count = 0;
    for(int i = 5; n / i >= 1; i *= 5) {
        count += n/i;
    }

    cout << count << endl;

    return 0;
}
