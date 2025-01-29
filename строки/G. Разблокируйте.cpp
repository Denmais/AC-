// #include <iostream>
// #include <vector>


// using namespace std;

// int main()
// {

//     string pp, res;
//     int n;
//     cin >> pp;
//     cin >> n;
//     bool f = true;

//     vector<string> v(n);


//     for (int i = 0; i<n; i++) {
//         cin >> v[i];
//     }

//     for (int i = 0; i<n; i++) {
//         for (int j = i; j<n; j++) {
//             res = v[i] + v[j];
//             if (res.find(pp) != string::npos) {
//                 f = false;
//             }
//             res = v[j] + v[i];
//             if (res.find(pp) != string::npos) {
//                 f = false;
//             }
//         }
//     }    

//     if (f) {
//         cout << "NO";
//     } else {
//         cout << "YES";
//     }

// }