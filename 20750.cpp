#include <iostream>
#include <algorithm>
using namespace std;
const int BOARDSIZE=8;
int Perm[] = {1, 2, 3, 4, 5, 6, 7, 8};

// check diagonal conflicts
bool no_conflict() {
    bool diagA[BOARDSIZE*2] = {false}, diagB[BOARDSIZE*2] = {false};
    for (int c=0; c<BOARDSIZE; c++) {
        int r = Perm[c];
        if (diagA[r + c])
            return false;
        if (diagB[c - r + 8])
            return false;
        diagA[r+c] = true;
        diagB[c-r + 8] = true;
    }
    return true;
}

int main() {
    int r, c;
    cin >> r >> c;
    do {
        if (Perm[c-1] != r)
            continue;
        if (no_conflict()) {
            for (int i=0; i<BOARDSIZE; i++)
                cout << Perm[i] << " ";
            cout << endl;          
        }
    } while (next_permutation(Perm, Perm+BOARDSIZE));
    return 0;
}