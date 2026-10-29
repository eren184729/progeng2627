#include <iostream>
#include <vector>

int main() {

    int n, t;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::vector<int> v;

    for (int i = 0; i < n; i++) {
        int element;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> element;
        v.push_back(element);
    }

    std::cout << "Enter a number: ";
    std::cin >> t;

    for (int i = 0; i < v.size(); i++) {
        if (v[i] < t) {
            std::cout << v[i] << std::endl;
        }
    }

}