// #include <iostream>
// #include <unordered_map>


// using namespace std;

// int main()
// {
//     unordered_map<string, int> freq;
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
 
//     for (int i =1; i < s.length(); i++) {
//         freq[s.substr(i-1, 2)]++;
//     }
//     int res = 0;
//     string r;
    
//     for (auto &e: freq) {
//         //cout << '{' << e.first << ", " << e.second << '}' << std::endl;
//         if (e.second >res) {
//             res = e.second;
//             r = e.first;
//         }
//     }
//     cout << r;
 
//     return 0;
// }