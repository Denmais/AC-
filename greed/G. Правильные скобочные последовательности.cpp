// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;



// void str(vector<string>& v, string s, int r, int l, int z) {

//     if (r + l == 2*z) {
//    //     cout << s << endl;
//         v.push_back(s);
//     } else {
//       //  cout << s << " ";
//         if (r<z) {
//             str(v, s+"(", r+1, l, z);
//         }
//         if (l<r) {
//             str(v, s+")", r, l+1, z);
//         }
//     }
// }



// int main() {

//     int n, z;
//     cin >> n;
    
//     for (int i=0;i<n;i++) {
//         cin >> z;
//         int r=1, l=0;
//         string s="(";
//         vector<string> v(0);
//         str(v, s, r, l, z);
//        // cout << v.size();
//         for (int j=0;j<z;j++) {
//             cout << v[j] << endl;
//         }
//     }


    
    
// };