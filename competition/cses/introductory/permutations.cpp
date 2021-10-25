#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
//    cout << "Hello Permutations " << endl;

    cin >> n;
    if(n <= 3) {
        if(n ==1) {
            cout << "1" << endl;
        } else {
            cout << "NO SOLUTION" << endl;
        }
    }
    else {
        // you want to print all even numbers and then all odd numbers
        for(int i = 2; i <= n; i=i+2) {
            cout << i << " ";
        }
        for(int i = 1; i <=n; i=i+2) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}

