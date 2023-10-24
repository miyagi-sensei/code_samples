// full solution but using index convention starting at 1 for Rects[][]
#include <iostream>
using namespace std;

int N;
bool Rects[1001][1001];

void flip(int r, int c) {
    Rects[r][c] = !Rects[r][c];
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
    for (i=1; i<=N; i++)
        for (j=1; j<=N; j++)
            sum += Rects[i][j];
    cout << sum << endl;
    return 0;
}