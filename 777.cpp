// Solv1
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         int H, X, Y;
//         cin >> H >> X >> Y;
        
//         // Case 1: Use only normal attacks
//         int normalOnly = (H + X - 1) / X; // ceiling division
        
//         // Case 2: Use special attack once (if needed)
//         int afterSpecial = H - Y;
//         int withSpecial;
//         if (afterSpecial <= 0)
//             withSpecial = 1; // boss defeated immediately
//         else
//             withSpecial = 1 + (afterSpecial + X - 1) / X;
        
//         cout << min(normalOnly, withSpecial) << endl;
//     }
//     return 0;
// }

//solve 2 

#include <iostream>
int main (){
    using namespace std;
    int t ;
    cin >> t ;

    while (t--)
    {
        int h , x , y ;
        int count = 0;
        cin >> h >> x >> y ;
        if (x<y){
            h-=y;
            count++;
        }
        while (h>0)
        {
            h-=x;
            count++;
        }
        cout << count << endl;
    }
    return 0;
}