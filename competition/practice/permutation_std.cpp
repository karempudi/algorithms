#include <bits/stdc++.h>

using namespace std;

void printPermutation(vector<int> &permutation) {
    cout << "{ ";
    for(auto i: permutation) {
        cout << i << " ";
    }
    cout << "}" << endl;
}

int main() {
    vector<int> permutation;
    for(int i = 1; i <= 4; i++) {
        permutation.push_back(i);
    }

    do {
        printPermutation(permutation);
    } while(next_permutation(permutation.begin(),
                            permutation.end()));

    return 0;
}

