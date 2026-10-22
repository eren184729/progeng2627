#include <iostream>

double mypow(double base, int exp){
    double result = 1.0;
    // we declare a variable for the result
    // (should it be initialised? to what value?)
    if (exp < 0) {
        
        base = 1.0 / base;
        for(int i = 1; i <= -exp; i++){
        result *= base;
    
    } 
    return result;
    }
    // TODO: use a for loop to implement the repeated multiplication algorithm 
    // so that at the end of the loop variable result contains base^exp
    for(int i = 1; i <= exp; i++){
        result *= base;
    
    }    

    return result;
    // at the end we return the value we computed
    // we *do not print* anything in the function
}

int sum_of_powers(int base, int length) {

    int sum = 0;
    for (int i = 1; i <= length; i++) {

        sum += mypow(base, i);

    }
    return sum;
}

int main(){
    // we test examples with integer (and non-negative) exponent

    std::cout << "2^3: " << mypow(2, 3) << std::endl;
    std::cout << "0.5^2: " << mypow(0.5, 2) << std::endl;
    std::cout << "1^0: " << mypow(1, 0) << std::endl;

    std::cout << "2^-2: " << mypow(2, -2) << std::endl;
    std::cout << "0.5^-1: " << mypow(0.5, -1) << std::endl;
    std::cout << "1^-1: " << mypow(1, -1) << std::endl;

    int base, length;
    std::cout << "Put the base and length of the series: " << std::endl;
    std::cin >> base >> length;
    std::cout << sum_of_powers(base, length) << std::endl;

}