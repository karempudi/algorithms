#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    for(long long i = 1; i <= n; i++) {
        cout << (i * i * (i * i - 1) - (8 * (i - 1) * (i - 2)))/2 << endl;
    }

    return 0;
}
