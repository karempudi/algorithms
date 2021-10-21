#include <bits/stdc++.h>

using namespace std;

void printPermutation(vector<int> &output) {
    cout << "{ "; 
    for(auto i : output) {
        cout << i << " ";
    }
    cout << "}" << endl;
}

void search(int n, bool chosen[], vector<int> &integers, vector<int> &permutation) {
    if (permutation.size() == n) {
        printPermutation(permutation);
        return;
    } else {
        for(int i = 0; i < n; i++) {
            if(chosen[i]) continue;
            chosen[i] = true;
            permutation.push_back(integers[i]);
            search(n, chosen, integers, permutation);
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}


int main() {

    vector<int> integers = {1, 2, 3};
    vector<int> permutation = {};
    int n = integers.size();
    bool chosen[n];
    cout << "Generating permutations ... " << endl;
    search(n, chosen, integers, permutation);
    return 0;
}
