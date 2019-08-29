#include <iostream>

int main() {

    char hora[10];
    std::cin >> hora;

    int h = (hora[0] - '0') * 10 + (hora[1] - '0');
    char formato = hora[8];

    if(h == 12 and formato == 'A') {
        hora[0] = '0';
        hora[1] = '0';
    } else {
        if(formato == 'P' and h != 12) {
            h += 12;

            int dig = h / 10;
            h %= 10;

            hora[0] = dig + '0';
            hora[1] = h + '0';
        }
    }

    for(int i = 0; i < 8; i++) {
        std::cout << hora[i];
    }

    return 0;
}
