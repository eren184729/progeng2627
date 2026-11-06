#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int main(){

    std::string inputfilename;
    // as usual not a special name
    std::cout << "enter name of input file" << std::endl;

    std::cin >> inputfilename;

    std::ifstream infile2; 
    infile2.open(inputfilename);

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

    std::string outputfilename;
    std::cout << "enter name of output file" << std::endl;

    std::cin >> outputfilename;

    std::ofstream outfile2;
    outfile2.open(outputfilename);

    for (int i = v2.size() - 1; i >= 0; i--){
        outfile2 << v2[i] << std::endl;
    }

    /*************************************************************************************/

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
    // onto a different text file

    std::ofstream outfile;
    outfile.open("output2.txt");

    for (int i = v.size() - 1; i >= 0; i--){
        outfile << v[i] << std::endl;
    }

}