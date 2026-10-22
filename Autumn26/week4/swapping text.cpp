#include <iostream>
#include <string>

void stringswap(std::string& a, std::string& b) {
    std::string temp = a;
    a = b;
    b = temp;
}

int main () {

    std::string str1 = "wow";
    std::string str2 = "no way";

    std::cout << "str1: " << str1 << std::endl;
    std::cout << "str2: " << str2 << std::endl;

    stringswap(str1, str2);

    std::cout << "After swapping:" << std::endl;
    std::cout << "str1: " << str1 << std::endl;
    std::cout << "str2: " << str2 << std::endl;
}