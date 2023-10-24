// full solution
#include <iostream>
#include <algorithm>
using namespace std;

int N, K, Epochs[65537], Gaps[65536];

int main() {
    int i, year;
    cin >> N >> K;
    Epochs[0] = 0;  // redundant but explicitly here for clarity
    for (i=1; i<=N; i++) {
        cin >> year;
        Epochs[i] = year / 12 + 1;
    }
    sort(Epochs, Epochs+N+1);
    for (i=0; i<N; i++)
        Gaps[i] = Epochs[i+1] - Epochs[i] - 1;
    sort(Gaps, Gaps+N);
    int ans = Epochs[N];
    for (i=1; i<K; i++)
        ans -= Gaps[N-i];
    cout << ans * 12 << endl;
    return 0;
}