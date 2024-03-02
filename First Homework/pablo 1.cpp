#include <iostream>
using namespace std;

#define M 6

int main() {
    int A, B, C;
    cin >> A >> B;
    C = 2 * A - B;
    C = C - M;
    B = A + C - M;
    A = B * M;
    cout << A << endl;
    B = -1;
    cout << B << " " << C << endl;

    return 0;
}

