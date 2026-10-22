#include <iostream>

void myswap(double& n1, double& n2){

    double tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;

}

// function myswap to be used 
// in sort_two_numbers below
// must be included here (beforehand)

void sort_two_numbers(double& s1, double& s2){
    // complete this function
    // so that the output is as in the examples below
    if (s1 > s2) {
        myswap(s1, s2);
    }
    // use function myswap within this function
    // (remember to change the type of the parameters to double)
}

void sort_three_numbers(double& s1, double& s2, double& s3){

    if (s1 > s2 && s1 > s3) {
        myswap(s1, s3);
        if (s1 > s2) {
            myswap(s1, s2);
        }
    }
    else if (s1 > s2 || s1 > s3) {
        if (s2 > s3) {
            myswap(s2, s3);
        }
        if (s1 > s2) {
            myswap(s1, s2);
        }
    }
    else if (s2 > s3) {
        myswap(s2, s3);
    }
}

int main(){
    double n1, n2, n3, n4, n5;
    std::cout << "please enter two numbers:" << std::endl;
    std::cin >> n1 >> n2;
    std::cout << n1 << " " << n2 << std::endl;
    sort_two_numbers(n1, n2);
    std::cout << n1 << " " << n2 << std::endl;

    std::cout << "please enter three numbers:" << std::endl;
    std::cin >> n3 >> n4 >> n5;
    std::cout << n3 << " " << n4 << " " << n5 << std::endl;
    sort_three_numbers(n3, n4, n5);
    std::cout << n3 << " " << n4 << " " << n5 << std::endl;
}