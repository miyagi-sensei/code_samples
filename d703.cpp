#include <iostream>
using namespace std;

int N, H, Value[100001], Next[100001];
int main() {
    int i;
    cin >> N >> H;
    for (i=1; i<=N; i++)
        cin >> Value[i];
    for (i=1; i<=N; i++)
        cin >> Next[i];
    i = H;
    while (i != 0) {
        cout << Value[i] << endl;
        i = Next[i];
    }
    cout << "End" << endl;

    return 0;
}
