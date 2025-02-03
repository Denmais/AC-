#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {

    string s;
    int u=0,l=0;
    cin >>s;

    for (int i=0; i<s.length(); i++) {

        if (islower(s[i])) {
            l++;
        } else {
            u++;
        }
    }

    if (u>l) {
        for (auto & c: s) c = toupper(c);
    } else {
        for (auto & c: s) c = tolower(c);
    }
    cout << s;
}
