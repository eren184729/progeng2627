#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int search_vector(std::string s, const std::vector<std::string>& vin) {

    for (int i = 0; i < vin.size(); i++) {
        if (vin[i] == s) {
            return i;
        }
    }
    return -1;
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout) {

    for (int i = 0; i < vin1.size(); i++) {
        vout.push_back(vin1[i]);
    }

    for (int i = 0; i < vin2.size(); i++) {
        if (search_vector(vin2[i], vin1) == -1) {
            vout.push_back(vin2[i]);
        }
    }

}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout) {

for (int i = 0; i < vin1.size(); i++) {
        if (search_vector(vin1[i], vin2) != -1) {
            vout.push_back(vin1[i]);
        }
    }

}

int main() {

    std::string filename1, filename2;

    std::cout << "Enter the first filename: ";
    std::cin >> filename1;

    std::cout << "Enter the second filename: ";
    std::cin >> filename2;

    std::ifstream wh1;
    std::ifstream wh2;

    wh1.open(filename1);
    wh2.open(filename2);

    if (!(wh1.is_open() && wh2.is_open())) {
        std::cerr << "Error opening files" << std::endl;
        exit(EXIT_FAILURE);
    }

    std::vector<std::string> vin1, vin2, voutunion, voutintersection;
    std::string tmp;
    std::string tmp1;

    while (wh1 >> tmp) {
        vin1.push_back(tmp);
    }

    while (wh2 >> tmp1) {
        vin2.push_back(tmp1);
    }

    wh1.close();
    wh2.close();

    union_vector(vin1, vin2, voutunion);
    intersection_vector(vin1, vin2, voutintersection);

    std::ofstream u;
    u.open("union.txt");

    for (int i = 0; i < voutunion.size(); i++) {
        u << voutunion[i] << std::endl;
    }
    u.close();
    std::ofstream intersection;
    intersection.open("intersection.txt");

    for (int i = 0; i < voutintersection.size(); i++) {
        intersection << voutintersection[i] << std::endl;
    }
    intersection.close();
}