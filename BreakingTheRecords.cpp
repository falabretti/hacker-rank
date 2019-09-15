#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    int menor = 0, maior = 0;
    int breaksMenor = 0, breaksMaior = 0;

    for(int i = 0; i < n; i++) {
        int score;
        cin >> score;

        if(i == 0) {
            menor = maior = score;
        }

        if(score < menor) {
            menor = score;
            breaksMenor++;
        }

        if(score > maior) {
            maior = score;
            breaksMaior++;
        }
    }

    cout << breaksMaior << " " << breaksMenor << endl;

    return 0;
}
