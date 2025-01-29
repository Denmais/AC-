// #include <iostream>


// using namespace std;

// int main()
// {

//     int n, count;
//     unsigned long long a, p;

//     cin >> n;

//     for (int i = 0; i<n; i++) {
//         unsigned long long md;
//         count = 0;
//         cin >> a;
//         if (a< 2050) {
//             cout << -1 << endl;
//             continue;
//         }
//         if (a % 2050 == 0) {
//         p = a / 2050;
//         } else {
//             cout << -1 << endl;
//             continue;
//         }
//        // cout << p << endl;
//        if (p < 10) {
//         md = p;
//        }
        
//         for (unsigned long long j = p; j/10 != 0; j = j/10 ) {
//             md =  j/10;
//     //        cout << md << endl;
//             count += j%10;
//         }
//         count += md;
//         cout << count << endl;
//     }

// }