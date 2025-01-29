// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// int main() {

//     int t;
//     string pp, res;
//     bool f;
//     cin >> t;

//     for (int i = 0; i<t; i++) {
//         cin >> pp;
//         res = pp;
//         f = true;

//         for (int j=0; j <pp.length()-1;j++) {
//             if (res[0] == res.back()) {
//                 res = pp[j+1] + pp.substr(0, j+1) + pp.substr(j+2, pp.length()-j-2);
//                 //cout << res << "  " << j << endl;
//             } else {
//                 f = false;
//                 break;
//                 //cout << res << endl;
//             }
//         }
//         if (f) {
//             cout << -1 << endl;;
//         } else {
//             cout << res << endl;
//         }

//     }
    
// };