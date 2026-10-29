#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout) {

    for (int i = 0; i < vin.size(); i++) {
        if ((vin[i] - t) < 0) {
            vout.push_back(vin[i]);
        }
    }

}

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout) {

    for (int i = 0; i < (vin1.size() + vin2.size()); i++) {
        if (i < vin1.size()) {
            vout.push_back(vin1[i]);
        }
        else {
            vout.push_back(vin2[i - vin1.size()]);
        }
    }

}

void from_1_to_n(int n, std::vector<int>& vout){

    for(int i = 0; i < n; i++){
        vout.push_back(i+1);
    }

}

int main(){
    std::vector<double> vout1;
    filter_v({5.3, 8.7, 3.2, 4.4, 7.8, 6.23, 6.19, 6.2}, 6.2, vout1);
    for (int i = 0; i < vout1.size(); i++) {
        std::cout << vout1[i] << std::endl;
    }

    std::vector<int> vout;
    append_vectors({5, 4, 7, 8, 3}, {4, 2, 5, 6, 7}, vout);
    for (int i = 0; i < vout.size(); i++) {
        std::cout << vout[i] << std::endl;
    }

    std::vector<int> v;
    for(int n = 3; n < 7; n++){

        v.clear();
        from_1_to_n(n, v);

        std::cout << "printing vector:" << std::endl;
        for(int i = 0; i < v.size(); i++){
            std::cout << v[i] << std::endl;
        }
    }
}