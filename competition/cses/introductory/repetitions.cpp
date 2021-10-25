#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int current_letter;
    int prev_letter = 0;
//  char prev_letter = '0';
    int max = 0;
    int local_max = 1;
    while((current_letter = getchar()) != EOF) {

        if(prev_letter == current_letter) {
//            cout << "Same letter: " << (char)current_letter << endl;
            local_max += 1;
        } else {
            if (local_max > max) {
                max = local_max;
            }
            prev_letter = current_letter;
            local_max = 1;
 //           cout << "Different Letter: " << (char)current_letter << endl;
        }
    }
    //cout << "Max: " << max << endl;
    cout << max << endl;

    return 0;
}
