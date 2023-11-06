// enumeration using bitmasks
#include <iostream>
using namespace std;

int N, S, A[20];

int main() {
    int i, j;
    cin >> N >> S;
    for (i=0; i<N; i++)
        cin >> A[i];
    for (i=0; i < (1<<N); i++) {
        int sum = 0;
        for (j=0; j<N; j++) {
            int bitmask = (1 << j);
            if ((bitmask & i) != 0) // & is behind != in order of precedence
                sum += A[j];
        }
        if (sum == S) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}