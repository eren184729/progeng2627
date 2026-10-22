#include <iostream>
#include <cmath>

int sum_of_powers(int base, int length) {

    int sum = 0;
    for (int i = 1; i <= length; i++) {

        sum += std::pow(base, i);

    }
    return sum;
}

int main() {

    int base, length;
    std::cout << "Put the base and length of the series: " << std::endl;
    std::cin >> base >> length;
    std::cout << sum_of_powers(base, length) << std::endl;

}