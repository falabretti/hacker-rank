#include <iostream>
#include <cmath>

int main() {

    int n;
    std::cin >> n;

    while(n--) {
        int valor;
        std::cin >> valor;

        if(valor >= 38) {
            int digit = valor % 10;
            int dif;

            if(digit > 5) {
                dif = 10 - digit;
            }
            else {
                dif = 5 - digit;
            }

            if(dif < 3) {
                valor += dif;
            }
        }

        std::cout << valor << std::endl;
    }

    return 0;
}
