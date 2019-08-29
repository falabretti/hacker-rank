#include <iostream>
#include <cmath>

int main() {

    int tam;
    std::cin >> tam;

    int m[tam][tam];
    int dif = 0;

    for(int i = 0; i < tam; i++) {
        for(int j = 0; j < tam; j++) {
            std::cin >> m[i][j];

            if(i == j) {
                dif += m[i][j];
            }

            if(i == tam - 1 - j) {
                dif -= m[i][j];
            }
        }
    }

    std::cout << abs(dif) << std::endl;

    return 0;
}
