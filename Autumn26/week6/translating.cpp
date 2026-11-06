#include <iostream>
#include <string>
#include <vector>
#include <fstream>

int main() {

    std::ifstream advertisement;
    std::ifstream dictionary;

    advertisement.open("fancy sounding ad.txt");
    dictionary.open("real meanings.txt");

    if (!(advertisement.is_open() && dictionary.is_open())) {
        std::cout << "Error opening files." << std::endl;
        return 1;
    }

    std::vector<std::string> ad;
    std::vector<std::string> dict;

    std::string temp;

    while (advertisement >> temp) {
        ad.push_back(temp);
    }
    advertisement.close();
    while (dictionary >> temp) {
        dict.push_back(temp);
    }
    dictionary.close();
    std::ofstream output;
    std::cout << "Enterng the name of the output file: ";
    std::string output_file;
    std::cin >> output_file;
    output.open(output_file);

    for (int i = 0; i < ad.size(); i++) {
        bool found = false;
        for (int j = 0; j < dict.size(); j += 2) {
            if (ad[i] == dict[j]) {
                output << dict[j + 1] << " ";
                found = true;
                break;
            }
        }
        if (!found) {
            output << ad[i] << " ";
        }

    }
    output.close();
}