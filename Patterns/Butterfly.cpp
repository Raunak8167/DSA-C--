#include <iostream>
using namespace std;
int main() {
    int x;
    std::cout << "Enter the number of rows: ";
    std::cin >> x;
    for (int i = 1; i <= x; i++) {
        for (int b = 1; b <= i; b++) {
            std::cout << "* ";
        }
        for (int j = 1; j <= 2 * (x - i); j++) {
            std::cout << "  ";
        }
        for (int k = 1; k <= i; k++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    for (int i = x - 1; i >= 1; i--) {
        for (int b = 1; b <= i; b++) {
            std::cout << "* ";
        }
        for (int j = 1; j <= 2 * (x - i); j++) {
            std::cout << "  ";
        }
        for (int k = 1; k <= i; k++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    return 0;
}