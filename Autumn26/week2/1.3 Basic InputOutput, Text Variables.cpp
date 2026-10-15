#include <iostream>

// includes the header iostream
// (input and output stream)
// headers are often needed in addition
// to the core language
// in this case the header is needed
// in order to perform input and output

#include <string>
// this includes the header for text variables

int main(){
// begins a function called main
// functions will be covered later on
// for now we always include our instructions 
// into something beginning with int main(){

    std::cout << "hello everyone";

    // performs the actual printing
    // read it right to left:
    // the text "hello"
    // is printed (<<)
    // on std::cout

    // cout stands for console output
    // and it represents the screen
    // (std stands for standard,
    // we will see later on why)

    // note that the text needs to be
    // enclosed in quotes (")

    // note the ; at the end
    // C++ instructions end with a ;

    std::cout << "hello" << std::endl;
    // we print hello, then print a newline
    // this is equivalent to
    // std::cout << "hello";
    // std::cout << std::endl;

    std::cout << "goodbye" << std::endl;
    // we print goodbye, then print a newline

    std::string user_name;
    // this is the declaration of a variable:
    // "user_name" is the name of this variable
    // std::string is the type of the variable

    // variables are like boxes that contain information
    // type std::string variables can contain text

    std::cout << "what is your name?" << std::endl;
    // this is just a normal printing instruction 

    std::cin >> user_name;
    // this instruction reads information from the keyboard
    // (std::cin stands for console input)
    // and stores it in variable "user_name"

    std::cout << "hello, " << user_name << std::endl;
    // this printing instruction does the following:
    // prints the fixed text "hello, "
    // prints the content of variable user_name
    // prints a newline

    std::string user_name2;
    std::string user_surname;

    std::cout << "what is your name?" << std::endl;
    std::cin >> user_name2;

    std::cout << "what is your surname?" << std::endl;
    std::cin >> user_surname;

    std::cout << "hello, " << user_name2 << " " << user_surname << std::endl;
}
// this curly brace ends function main