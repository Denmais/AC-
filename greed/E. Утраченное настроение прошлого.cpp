// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;




// int main() {

//     int n, z;

//     cin >> n >> z;

//     vector<int> v(n);
//     vector<int> v2(z);

//     for (int i=0; i<n;i++) {
//         cin >> v[i];
//     }

//     for (int i=0; i<z; i++) {
//         cin >> v2[i];
//     }


//     if (z>1) {
//         cout << "YES";
//     } else {
//         for (int i=0; i<n; i++) {
//             if (v[i] == 0) {
//                 v[i] = v2[0];
//                 break;
//             }
//         }
//         bool f= true;
//         for (int i=0; i<n-1; i++) {
//             if (v[i]>v[i+1]) {
//                 f = false;
//                 break;
//             }
//         }
//         if (f) {
//             cout << "NO";
//         } else {
//             cout << "YES";
//         }

//     }


    
// };