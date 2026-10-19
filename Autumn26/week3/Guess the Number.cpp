#include <iostream>

int main() {

    std::cout << "Pick any number between 1 and 100.\nI will try to guess it.\nAfter each guess, tell me if it's higher or lower." << std::endl;

    int low = 1, high = 100, guess;
    bool correct = false;

    while (!correct) {

        guess = (low + high) / 2;
        std::cout << "Is your number " << guess << "? (y/n): ";
        char response;
        std::cin >> response;

        if (response == 'y' || response == 'Y') {

            std::cout << "Yay! I found your number!" << std::endl;
            return 0;

        }

        std::cout << "Is your number higher or lower than " << guess << "? (h/l): ";
        std::cin >> response;

        if (response == 'h' || response == 'H') {

            low = guess + 1;

        }

        else {

            high = guess - 1;

        }
    }
}