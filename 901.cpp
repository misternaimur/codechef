#include <iostream>
using namespace std;

int main() {
    int T, b;
    cin >> T;

    for (int i = 0; i < T ; i++) {
        cin >> b;
        int time = 0;

        for ( ; b != 50; time++) {
            if (b > 50) {
                b -= 3;
            } else {
                b += 2;
            }
        }

        cout << time << endl;
    }

    return 0;
}
