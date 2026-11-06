#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>

int main(){
    std::ifstream infile2; 
    infile2.open("input2.txt");

    std::vector<std::string> v2;

    if(!infile2.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp2;

    while(infile2 >> tmp2){
        v2.push_back(tmp2); 
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }

    infile2.close(); 

    for (int i = v2.size() - 1; i >= 0; i--){

        std::cout << v2[i] << std::endl;
        
    }

/*************************************************************************************************** */

    std::ifstream infile; 
    infile.open("input.txt");

    std::vector<int> v;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while(infile >> tmp){
        v.push_back(tmp); 
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }

    infile.close(); 

    // TODO: print the content of v in reversed order
    for (int i = v.size() - 1; i >= 0; i--){

        std::cout << v[i] << std::endl;
        
    }

}