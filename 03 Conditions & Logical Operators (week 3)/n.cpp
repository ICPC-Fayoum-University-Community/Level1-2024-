#include <iostream>

using namespace std;

int main() {
    int A, B, C, D;
    char S, Q = '=';
    cin >> A >> S >> B >> Q >> C;
    if (S == '+')
        D = A + B;
    else if (S == '-')
        D = A - B;
    else if (S == '*')
        D = A * B;
    if (C == D)
        cout << "Yes" << endl;
    else
        cout << D << endl;
    return 0;
}