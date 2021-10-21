#include <bits/stdc++.h>

using namespace std;

void printOutput(vector<int> &output) {
    cout << "{ ";
    for(auto i: output) {
        cout << i << " ";
    }
    cout << "}" << endl;
}

void search(int k, int length, vector<int>& set, vector<int> &output) {
    if (k == length) {
        printOutput(output);
        return;
    } else {
        // include kth element in the output subset,
        output.push_back(set[k]);
        search(k+1, length, set, output);
        output.pop_back();
        // don't include kth element in the output subset,
        search(k+1, length, set, output);
    }
}


int main() {
    vector<int> subset = {1, 2, 3};
    vector<int> output = {};
    cout << subset.size() << endl;
    printOutput(subset);
    cout << "Printing all subsets " << endl;
    search(0, subset.size(), subset, output);
    return 0;
}
