#include <bits/stdc++.h>

using namespace std;

void rotateLeft(int qnt, vector<int>& vec) {

    vector<int> base(vec.begin(), vec.end());

    for(int i = 0; i < vec.size(); i++) {
        int index = i + qnt;
        if(index > vec.size() - 1) index -= vec.size();

        vec.at(i) = base.at(index);
    }
}

int main() {

    int n, d;
    cin >> n >> d;

    vector<int> vec;
    vec.reserve(n);

    for(int i = 0; i < n; i++) {
        int value;
        cin >> value;
        vec.push_back(value);
    }

    rotateLeft(d, vec);

    for(int i = 0; i < vec.size(); i++) {
        cout << vec.at(i);

        if(i != vec.size() - 1) cout << " ";
        else cout << endl;
    }

    return 0;
}


