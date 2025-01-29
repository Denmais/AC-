// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// int main() {

//     int q, abcount=0, bccount=0;
//     cin >> q;
//     vector<string> v(q);

//     for (int i = 0; i < q; i++) {
//         cin >> v[i];
//     }

//     for (int z = 0; z< q; z++) {

//         vector<vector<string>> vd(v[z].length(), vector<string>(v[z].length()+1));
//         vector<vector<int>> vq(v[z].length(), vector<int>(v[z].length()+1));

//         for (int q = 0; q < v[z].length(); q++) {
//             for (int q2=0; q2< v[z].length()+1;q2++) {
//                 vd[q][q2] = "";
//                 vq[q][q2] = 0;
//             }
//         }
//         vd[0][0] = v[z][0];

//         if (vd[0][0] == "a") {
//             vd[0][1] = "b";
//             vq[0][1] = 0;
//         } else {
//             vd[0][1] = "a";
//             vq[0][1] = 0;
//         }

//         for (int d = 1; d<v[z].length(); d++) {
//             vd[d][0] = vd[d-1][0] + v[z][d];
//             if (vd[d-1][0].back() == 'a' && v[z][d] == 'b') {
//                 vq[d][0] = vq[d-1][0] + 1;
//             } else if (vd[d-1][0].back() == 'b' && v[z][d] == 'a')
//             {
//                 vq[d][0] = vq[d-1][0] - 1;
//             } else {
//                 vq[d][0] = vq[d-1][0];
//             }
            
//         }
        
//         // for (int d = 0; d<v[z].length(); d++) {
//         //     cout << vd[d][0] << endl;
//         // }
//         for (int d = 1; d<v[z].length(); d++) {
//             for (int m = 1; m<v[z].length()+1; m++) {
//                 if (v[z][d] == 'a') {
//                     vd[d][m] = vd[d-1][m-1] + "b";
//                     if (vd[d-1][m-1].back() == 'a') {
//                         vq[d][m] = vq[d-1][m-1] + 1;
//                     } else {
//                         vq[d][m] = vq[d-1][m-1];
//                     }
//                 } else {
//                     vd[d][m] = vd[d-1][m-1] + "a";
//                     if (vd[d-1][m-1].back() == 'b') {
//                         vq[d][m] = vq[d-1][m-1] - 1;
//                     } else {
//                         vq[d][m] = vq[d-1][m-1];
//                     }
//                 }
//             }
//         }

//         for (int d = 0; d<v[z].length()+1; d++) {
//             if (vq[v[z].length()-1][d] == 0) {
//             cout << vd[v[z].length()-1][d] <<endl;
//             break;
//             }
//             //cout << vd[v[z].length()-1][d] << "-->" << vq[v[z].length()-1][d] << endl;
//         }


//         // for (int d = 0; d<v[z].length(); d++) {
//         //     cout << vq[d][0] << endl;
//         // }

//     }
    
// };