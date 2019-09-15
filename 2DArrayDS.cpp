#include <bits/stdc++.h>

using namespace std;

int main() {

    int m[6][6];

    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 6; j++) {
            cin >> m[i][j];
        }
    }

    vector<int> somas;
    somas.reserve(16);

    for(int i = 1; i < 5; i++) {
        for(int j = 1; j < 5; j++) {
            int soma = 0;

            soma += m[i-1][j-1];
            soma += m[i-1][j];
            soma += m[i-1][j+1];
            soma += m[i][j];
            soma += m[i+1][j-1];
            soma += m[i+1][j];
            soma += m[i+1][j+1];

            somas.push_back(soma);
        }
    }

    int maior = *max_element(somas.begin(), somas.end());

    cout << maior << endl;

    return 0;
}
