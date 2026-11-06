#include <iostream>
#include <fstream>
// header fstream needed for working with text files

int main(){

    std::ifstream infile; 
    // we declare the object that will represent the text file
    // of type std::ifstream (infile is not a special name)

     infile.open("input.txt");

    // now before we go any further it's important to check
    // whether the operation opening the file really worked
    // (if for example we misspell the name then the program
    // doesn't work and we don't know why

    // please note that difference between function open (above)
    // and function is_open (below)

     if(infile.is_open()){ 
        int tmp, sum = 0;

        // the condition in the loop below is an idiomatic way
        // of reading from text files in C++ 

        // (infile >> tmp) at the same time performs the reading attempt
        // and returns a value that is evaluated as a boolean

        // if the reading attempt is successful then
        // the content is stored in tmp 
        // and what is returned
        // evaluates to true 
        // (so we keep going with the loop)

        // if the reading attempt is unsuccessful then
        // nothing new is stored in tmp
        // and what is returned
        // evaluates to false
        // (so the loop terminates)

        while(infile >> tmp){
            std::cout << tmp << std::endl;
            sum += tmp;
        }
        
        std::cout << "sum = " << sum << std::endl;
        infile.close(); 

    }
    else{
        std::cout << "error opening file" << std::endl;
    }

    if(infile.is_open()){ 
        // if the operation was successful
        // we can read the content of the file
        // this is done in a remarkably 
        // similar way to using std::cin

        int tmp;

        infile >> tmp;
        std::cout << tmp << std::endl; 
        // this will read and then print 
        // the first number in the file
        // (which in the example above is 10)

        infile >> tmp;
        std::cout << tmp << std::endl;
        // this will read and then print 
        // the second number in the file
        // (which in the example above is 4)

        infile >> tmp;
        std::cout << tmp << std::endl;

        infile >> tmp;
        std::cout << tmp << std::endl;

        infile.close(); 
        // we close the file when we are done

    }
    else{
        std::cout << "error opening file" << std::endl;
    }

}