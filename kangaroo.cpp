#include <bits/stdc++.h>

using namespace std;

struct kangaroo {
    int x, v;

    void andar() {
        x += v;
    }
};

int main() {

    int x1, v1, x2, v2;

    cin >> x1 >> v1 >> x2 >> v2;

    if(x1 < x2 and v1 < v2 or x2 < x1 and v2 < v1) cout << "NO" << endl;
    else {
        kangaroo menor, maior;

        if(x1 < x2) {
            menor = {x1, v1};
            maior = {x2, v2};
        }
        else {
            menor = {x2, v2};
            maior = {x1, v1};
        }

        bool possible = true;

        while(menor.x != maior.x) {
            menor.andar();
            maior.andar();

            if(menor.x > maior.x) {
                possible = false;
                break;
            }
        }

        if(possible) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
