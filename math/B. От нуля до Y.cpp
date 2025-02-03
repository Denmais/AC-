// #include <iostream>

// using namespace std;

// int main() {

//     int n, x, y, res=0, p, md;
//     cin >>n;

//     for (int i=0; i<n;i++) {
//         cin >>x >> y;
//         md = 0;
//         res = y % x;
//         p = y / x;

//         if (p/10 == 0) {
//             md = p;
//         }
//         //cout << res << "  " << p << endl;
//         for (int j=p; j /10 != 0; j=j/10) {
//             md = j/10;
//             res += j%10;
//           //  cout << res <<"ssss" << endl;
//         }

//         res += md;

//     cout << res << endl;


//     }


// };