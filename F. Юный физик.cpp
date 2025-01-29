// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// int main() {
//     int n, res = 0;
//     bool f = true;
//     cin >> n;
//     vector<vector<int>> v(n, vector<int>(3));

//     for (int i = 0; i< n; i++) {
//         for (int j = 0; j< 3; j++) {
//             cin >> v[i][j];
//         }
//     }

//     for (int j = 0; j < 3; j++) {
//         res = 0;
//         for (int i = 0; i <n; i++) {
//             res+=v[i][j];
//         }
//         if (res != 0) {
//             f = false;
//         }
//     }

//     if (f) {
//         cout << "YES";
//     } else {
//         cout << "NO";
//     }


// };