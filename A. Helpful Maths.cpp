// #include <iostream>
// #include <string>

// using namespace std;

// int main() {


//     string pp;
//     string res;
//     cin >> pp;
//     int v1 = 0, v2 = 0, v3 = 0;


//     for (char c : pp) {
//         if (c == '1') {
//             v1++;
//         } else if (c == '2')
//         {
//             v2++;
//         } else if (c == '3')
//         {
//             v3++;
//         }
//     }


//     if (v1 != 0) {
//             res += "1";
//         for (int i = 1; i < v1; i++) {
//             res += "+1";
//         }
//         for (int i = 0; i < v2; i++) {
//             res += "+2";
//         }
//         for (int i = 0; i < v3; i++) {
//             res += "+3";
//         }
//     } else if (v2 != 0)
//         {
//             res += "2";
//         for (int i = 1; i < v2; i++) {
//             res += "+2";
//         }
//         for (int i = 0; i < v3; i++) {
//             res += "+3";
//         }
//     } else {
//             res += "3";
//         for (int i = 1; i < v3; i++) {
//             res += "+3";
//         }
//     }

//     cout << res;


// };