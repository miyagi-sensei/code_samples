// generates all premutations in lexicographic order
#include <iostream>
#include <algorithm>
using namespace std;
int N, Perm[8];

/*
1. traverse from right to left and find the first item that is not following descending order (index i-1)
2. swap the item with the smallest greater item on the right (note items in descending order right of i): swap i-1 and j-1 item
3. sort arr[i:], which is the same as reversing arr[i:]
Use example: "acfedb" => identified "c" => smallest greater char on the right is "d" => swap => "adfecb" => "adbcef"!
*/
bool next_permute() {
    int i = N-1, j;
    for (i=N-1; i >= 0 && Perm[i-1] >= Perm[i]; i--);
    if (i < 0)
        return false;
    for (j=i; j < N && Perm[j] > Perm[i-1]; j++);
    swap(Perm[i-1], Perm[j-1]);
    reverse(Perm+i, Perm+N);
    // for (j=i; j<(N+i)/2; j++)
    //     swap(Perm[j], Perm[N-1-(j-i)]);
    return true;
}

int main() {
    cin >> N;
    for (int i=0; i<N; i++)
        Perm[i] = i+1;
    do {
        for (int i=0; i<N; i++)
            cout << Perm[i] << " ";
        cout << endl;
    } while (next_permute());
    return 0;
}