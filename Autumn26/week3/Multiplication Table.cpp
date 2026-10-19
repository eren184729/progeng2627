#include <iostream>

int main() {

    int row, coloumn, mc = 1;

    std::cin >> row;
    coloumn = row;

    for(int i = 1; i <= row; i++) {

        for(int j = 1; j <= coloumn; j++) {
            std::cout << j * mc << "\t";
        }

        mc++;
        std::cout << std::endl;
    }
}