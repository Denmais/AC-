#include <iostream>
#include <string>

using namespace std;

int main() {

    int t,a,b;
    string s;
    cin >> t;

    for (int i =0; i<t;i++) {
        cin >> a >> s;
        string res="";
        for (int j=0; j<a; j++) {
            res += s[a/2];
        }
    cout << res;
    }

    
    return 0;
}
