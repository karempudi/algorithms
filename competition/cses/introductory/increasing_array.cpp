#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    //cout << "Hello increasing array " << endl;
    int n;
    long long current_number;
    long long previous_number;
    long long diff = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        long long local_diff = 0;
        cin >> current_number;
        if (i == 0) {
            previous_number = current_number;
            continue;
        }
        else {
            if (current_number < previous_number) {
                local_diff = previous_number - current_number;
                previous_number = current_number + local_diff;
            }
            else {
                previous_number = current_number;
            }
        }
        diff += local_diff;
        //cout << current_number << " --- " << local_diff << endl;
    }
    cout << diff << endl;

    return 0;
}

