#include <iostream>

int smallest_factor(int n) {

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return i;
        }
    }
    return 0;

}

int primes_in_range(int min, int max) {

    for (int i = min; i <= max; i++) {
        if (smallest_factor(i) == 0) {
            std::cout << i << std::endl;
        }
    }
    return 0;

}

int main() {

    int min, max;
    std::cout << "Type a minimum number: " << std::endl;
    std::cin >> min;
    std::cout << "Type a maximum number: " << std::endl;
    std::cin >> max;
    std::cout << "The prime numbers in the range [" << min << ", " << max << "] are: " << std::endl;
    primes_in_range(min, max);

/*-------------------------------------------------------------------------------------------------*/
    int n;
    std::cout << "Type a number to find its smallest factor: " << std::endl; 
    std::cin >> n;
    if (smallest_factor(n) == 0) {
        std::cout << "The number is prime." << std::endl;
    } else {
        std::cout << "The smallest factor of " << n << " is: " << smallest_factor(n) << std::endl;
    }

}