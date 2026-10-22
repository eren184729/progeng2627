#include <iostream>

int myfactorial(int in){
// in is not a special name
// just a name

    int fact = 1;
    // variable that will store the result

    for (int i = in; i > 1; i--){
        fact *= i;
    }
    return fact;
    // return the result
    // we *do not print* anything in the function
    }

int main(){
    int n; 
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "factorial of " << n << ": " << myfactorial(n) << std::endl;
}