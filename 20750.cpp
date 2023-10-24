#include <iostream>
#include <algorithm>
using namespace std;
int Perm[] = {1, 2, 3, 4, 5, 6, 7, 8};

// check diagonal conflicts
bool no_conflict() {
    bool diagA[16] = {false}, diagB[16] = {false};
    for (int c=0; c<8; c++) {
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
            for (int i=0; i<8; i++)
                cout << Perm[i] << " ";
            cout << endl;          
        }
    } while (next_permutation(Perm, Perm+8));
    return 0;
}
