#include <iostream>

int main() {

    std::cout << "Please enter a natural number greater than 0: ";
    int number;
    std::cin >> number;

    if (number == 1) {
        std::cout << "1\t4\t2\t1" << std::endl;
        std::cout << "The sequence took 3 steps to reach 1." << std::endl;
        std::cout << "The maximum value in the sequence was 4." << std::endl;
        return 0;
    }
    
    int steps = 0;
    int max_value = number;

    while (number != 1) {

        std::cout << number << "\t";

        if (number % 2 == 0) {

            number /= 2;
        }

        else {

            number = 3 * number + 1;
            if (number > max_value) {

                max_value = number;
            }
        }
        steps++;
    }
    
    std::cout << std::endl;
    std::cout << "The sequence took " << steps << " steps to reach 1." << std::endl;
    std::cout << "The maximum value in the sequence was " << max_value << "." << std::endl;

} 