#include <iostream>
#include <bitset>
using namespace std;

int main() {
    bitset<8> a, b;	    // for storing 8 bits
    a = 25;
    b = 45;
    cout << "a      = " << a << endl;	// 00011001
    cout << "b      = " << b << endl;	// 00101101
    cout << "a & b  = " << (a & b) << endl;
    cout << "a | b  = " << (a | b) << endl;
    cout << "a ^ b  = " << (a ^ b) << endl;
    cout << "b >> 2 = " << (b >> 2) << endl;
    cout << "b << 2 = " << (b << 2) << endl;
    cout << "bit 3 of b is: " << b[3] << endl;
    b[3] = 0;   // b.reset(3);
    cout << "b      = " << b << endl;	// 00100101
    b[3] = 1;   // b.set(3);
    cout << "b      = " << b << endl;	// 00101101
    cout << b.count() << endl;  // 4
    return 0;
}
