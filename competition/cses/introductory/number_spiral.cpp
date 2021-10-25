#include <bits/stdc++.h>

using namespace std;



int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    //cout << "Number sprial, Enter test cases:";

    int n;
    cin >> n;

    //cout << "Number of test cases is: " << n << endl;
    long long row = 0;
    long long column = 0;
    //cout << "Enter row and column : ";
    while(cin >> row >> column) {
        //cout << "Row: " << row << " Column: " << column << endl;

        if (column >= row) {
            if(column % 2 == 1) {
                cout << column * column - row + 1;
            } else if (column % 2 == 0) {
                cout << (column - 1) * (column - 1) + row;
            }
        }
        else if(column < row) {
            if(row %2 == 0) {
                cout << row * row - column + 1;
            } else if(row % 2 == 1) {
                cout << (row - 1) * (row - 1) + column;
            }
        }
        cout << endl;
    }

    return 0;

}
