#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    unordered_multiset<string> inputStrings;
    inputStrings.reserve(n);

    while(n--) {
        string s;
        cin >> s;

        inputStrings.insert(s);
    }

    int q;
    cin >> q;

    while(q--) {
        string query;
        cin >> query;

        int qnt = inputStrings.count(query);
        cout << qnt << endl;
    }

    return 0;
}



