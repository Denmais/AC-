// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;




// int main() {

//     int n, z;
//     cin >> n;
    
//     for (int i=0;i<n;i++) {
//         cin >> z;

//         string s;
//         s.resize(2*z);
        
//         for (int i=0; i<2*z; i=i+2) {
//             s[i] = '(';
//             s[i+1] =')';
//         }

//         cout << s << endl;

//         for (int i=1; i<z; i++) {
            
//             if (s[i] == '(') {
//             s[i] = ')';
//             } else {
//                 s[i] = '(';
//             }
//             if (s[2*z-1-i] == '(') {
//             s[2*z-1-i] = ')';
//             } else {
//                 s[2*z-1-i] = '(';
//             }
//             cout << s << endl;


//         }


//     }


    
    
// };