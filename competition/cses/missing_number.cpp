#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;

    long long sum = 0;
    long long expected_sum = (n * (n + 1)/2);
    long long input;
    for(int i = 0; i < n - 1; i++) {
        cin >> input;
        sum += input;
    }
    cout << expected_sum - sum << '\n';

    return 0;
}
