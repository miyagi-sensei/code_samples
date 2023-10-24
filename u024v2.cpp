// full solution but using set to remove duplicates
#include <iostream>
#include <set>
using namespace std;

int N;
set<pair<int, int> > Flips;

void flip(int r, int c) {
    if (r == 0 || c == 0)
        return;
    if (Flips.count({r, c}))
        Flips.erase({r, c});
    else
        Flips.insert({r, c});
}

int main() {
    int i, j, sum = 0;
    string row;
    cin >> N;
    for (i=0; i<N; i++) {
        cin >> row;
        for (j=0; j<N; j++) {
            if (row[j] == '1') {
                flip(i+1, j+1);
                flip(i, j+1);
                flip(i+1, j);
                flip(i, j);
            }
        }
    }
    cout << Flips.size() << endl;
    return 0;
}