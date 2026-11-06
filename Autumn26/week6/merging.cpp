#include <iostream>
#include <string>
#include <vector>


void merge_vectors_int(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged) {

        int i = 0, count = 0;
        while (i < v1.size() && count < v2.size()) {
            if (v1[i] <= v2[count]) {
                merged.push_back(v1[i]);
                i++;
            }
            else {
                merged.push_back(v2[count]);
                count++;
            }
        }
        if (i < count) {
            while (i < v1.size()) {
                merged.push_back(v1[i]);
                i++;
            }
        }
        else {
            while (count < v2.size()) {
                merged.push_back(v2[count]);
                count++;
            }
        }
}

int main(){

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;

    std::vector<int> expected_output;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};

    merge_vectors_int(v1, v2, out);
    for (int i = 0; i < out.size(); i++) {
        std::cout << out[i] << " ";
    }

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }
}