// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// int main() {

//     int z, count;
//     cin >> z;
//     string pp, res, chv;

//     for (int i = 0; i < z; i++) {

//         cin >> pp;
//         chv = "";

//         for (int j =0; j< pp.length();j++) {
//             res = pp.substr(0, pp.length()-j) +chv;
//            // cout << res << "////" << endl;
//             count = 0;
//             for (int z = 1; z<res.length(); z++) {
//                 if (res[z-1] == 'a' && res[z] == 'b') {
//                     count++;
//                 } else if (res[z-1] == 'b' && res[z] == 'a')
//                 {
//                     count--;
//                 }
//             }
//             if (count == 0) {
//                 cout << res << endl;
//                 break;
//             }
//             chv = "";
//             for (int m = j+1; m>0; m--) {
//                 if (pp[pp.length()-m] == 'a') {
//                     chv += "b";
//                 } else if (pp[pp.length()-m] == 'b')
//                 {
//                     chv += 'a';
//                 }
//             }

//             }

//     }
    
// };