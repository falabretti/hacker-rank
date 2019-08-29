#include <iostream>
#include <iomanip>

int main() {

    int n;
    std::cin >> n;

    int width = n;
    std::string saida = "#";

    while(n--) {
        std::cout << std::setw(width) << std::right << saida << std::endl;

        saida += "#";
    }

    return 0;
}
