// #include <iostream>
// #include <vector>

// using namespace std;




// int main() {

//     int t;
//     cin >> t;

//     while (t--) {
//         int n, x, res = 0;
//         bool f = true;
//         cin >> n >> x;
//         vector<int> v(n);
        
//         for (int i = 0; i < n; ++i) {
//             cin >> v[i];
//         }

//         for (int i = 0; i < n; ++i) {
//             res += v[i];
//             cout << v[i];
//             if (res == x) {
//                 if (i < v.size() - 1) {
//                     swap(v[i], v[i + 1]);
//                 } else {
//                     f = false;
//                 }
//                 break;
//             }
//         }
//         if (f) {
//             cout << "YES\n";
//             for (int itr : v) {
//                 cout << itr << " ";
//             }
//             cout << "\n";
//         } else {
//             cout << "NO\n";
//         }
//     }



// };