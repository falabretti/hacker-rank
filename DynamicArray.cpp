#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, q;
    cin >> n >> q;

    vector<vector<int>> seqList(n);

    int lastAnswer = 0;

    while(q--) {
        int query, x, y;
        cin >> query >> x >> y;

        vector<int>& seq = seqList.at((x ^ lastAnswer) % n);

        if(query == 1) {
            seq.push_back(y);
        }
        else {
            int index = y % seq.size();
            lastAnswer = seq.at(index);

            cout << lastAnswer << endl;
        }
    }

    return 0;
}

