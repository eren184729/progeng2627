#include <iostream>
#include <vector>

int main() {

    int n, s, count = 0;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::vector<int> v;
    std::vector<int> indices;

    for (int i = 0; i < n; i++) {
        int element;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> element;
        v.push_back(element);
    }

    std::cout << "Enter a number: ";
    std::cin >> s;

    for (int i = 0; i < v.size(); i++) {
        if (v[i] == s) {
            count++;
            indices.push_back(i);
        }
    }

    std::cout << "Number of occurrences: " << count << std::endl;
    std::cout << "Indices of occurrences: ";
    for (int i = 0; i < indices.size(); i++) {
        std::cout << indices[i] << " ";
    }
    std::cout << std::endl;

}