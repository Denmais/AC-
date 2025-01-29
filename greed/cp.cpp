// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {

    

//     int t;
//     cin >> t;

//     for (int i = 0; i < t; i++) {
//         int n, x;
//         cin >> n >> x;
//         int c, res = 0;
//         vector<int> v(n);
//         bool f = true;
//         int lft = 0;


//         for (int j = 0; j < n; j++) {
//             cin >> v[j];
//         }
//         for (int j = 0; j < n; j++) {
//             res += v[j];
//             if (res == x) {
//                 c = v[j];
//                 if (j < n - 1) {
//                  v[j] = v[j + 1];
//                  v[j+1] = c;
//                 } else {
//                     f = false;
//                 }
//                 break;
//             }
//         }
//         if (!f) {
//             cout << "NO" << endl;
//         } else {
//             cout << "YES" << endl;
//             for (auto itr : v) {
//                 cout << itr << " ";
//             }
//             cout << endl;
//         }
//     }



// };