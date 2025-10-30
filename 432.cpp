#include <iostream>
using namespace std;

void chooseMask(int X, int Y) {
    int  D = X * 100;
    int C = Y * 10;

    if (C <= D)
        cout << "Cloth" << endl;
    else
        cout << "Disposable" << endl;
}

int main() {
    int T, X, Y;
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> X >> Y;
        chooseMask(X, Y);
    }

    return 0;
}