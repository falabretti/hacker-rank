#include <iostream>

typedef long long int lli;

int main() {

    int min, max;
    int startApple, startOrange;
    int qntApple, qntOrange;

    std::cin >> min >> max;
    std::cin >> startApple >> startOrange;
    std::cin >> qntApple >> qntOrange;

    int totalApple = 0;
    int totalOrange = 0;

    while(qntApple--) {
        int disApple;
        std::cin >> disApple;

        int posApple = startApple + disApple;

        if(posApple >= min and posApple <= max) {
            totalApple++;
        }
    }

    while(qntOrange--) {
        int disOrange;
        std::cin >> disOrange;

        int posOrange = startOrange + disOrange;

        if(posOrange >= min and posOrange <= max) {
            totalOrange++;
        }
    }

    std::cout << totalApple << std::endl;
    std::cout << totalOrange << std::endl;

    return 0;
}
