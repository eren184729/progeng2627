#include <iostream>

int max_of_two(int a, int b) {
    return (a > b) ? a : b;
}

int max_of_three(int a, int b, int c) {
    return max_of_two(max_of_two(a, b), c);
}

int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    int max = max_of_two(num1, num2);
    std::cout << "The maximum of " << num1 << " and " << num2 << " is: " << max << std::endl;

    int num3;
    std::cout << "Enter a third number: ";
    std::cin >> num3;

    int max1 = max_of_three(num1, num2, num3);
    std::cout << "The maximum of " << num1 << ", " << num2 << ", and " << num3 << " is: " << max1 << std::endl;

    return 0;
}