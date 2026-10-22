#include <iostream>
#include <cmath>
// for the square root

bool leap_year(int year){
    bool ly;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        ly = true;
    }
    else{
        ly = false;
    }

    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    
    if (m1 == 2) {
        if (leap_year(y1)) {
            if (d1 < 29) {
                d2 = d1 + 1;
                m2 = m1;
                y2 = y1;
            }
            else {
                d2 = 1;
                m2 = m1 + 1;
                y2 = y1;
            }

        }
        else {
            if (d1 == 29) {
                std::cout << "Invalid date: February " << d1 << " does not exist in year " << y1 << "." << std::endl;
                d2 = -1; // Indicate an invalid date
                m2 = -1;
                y2 = -1;
            }
            else if (d1 < 28) {
                d2 = d1 + 1;
                m2 = m1;
                y2 = y1;
            }
            else {
                d2 = 1;
                m2 = m1 + 1;
                y2 = y1;
            }
        }

    }
    else if (m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11) {

        if (d1 < 30) {
            d2 = d1 +1;
            m2 = m1;
            y2 = y1;
        }
        else {
            d2 = 1;
            m2 = m1 + 1;
            y2 = y1;
        }

    }
    else {

        if (d1 < 31) {
            d2 = d1 + 1;
            m2 = m1;
            y2 = y1;
        }
        else {
            d2 = 1;
            if (m1 == 12) {
                m2 = 1;
                y2 = y1 + 1;
            }
            else {
                m2 = m1 + 1;
                y2 = y1;
            }
        }

    }

}

bool integerdivision(int a, int b, int& quotient, int& remainder) {
        quotient = a / b;
        remainder = a % b;
        return true;
    }

bool perimeterandarea(double length, double width, double& perimeter, double& area) {

    if (length <= 0 || width <= 0) {
        return false;
    }
    else {

        perimeter = 2 * (length + width);
        area = length * width;
        return true;
    }

}

bool quadsolve(double a, double b, double c, double& x1, double& x2){

    bool realsol;
    double delta = b*b - 4 * a * c;

    if(delta < 0){
        realsol = false;
    }
    else{

        realsol = true;
        x1 = (-b + std::sqrt(delta)) / (2 * a);
        x2 = (-b - std::sqrt(delta)) / (2 * a);

        // function sqrt computes the square root
        // more legible and sometimes more efficient
        // than using e.g. std::pow(delta, 0.5)

    }

    return realsol;
}

int main(){

    int d1, m1, y1, d2, m2, y2;
    std::cout << "Input a date (day, month, year): " << std::endl;
    std::cout << "Day: ";
    std::cin >> d1;
    std::cout << "Month: ";
    std::cin >> m1;
    std::cout << "Year: ";
    std::cin >> y1;

    next_date(d1, m1, y1, d2, m2, y2);
    std::cout << "The day after " << d1 << "/" << m1 << "/" << y1 << " is: " << d2 << "/" << m2 << "/" << y2 << std::endl; 

/*-------------------------------------------------------------------------*/
    int a, b, quotient, remainder;
    std::cout << "Input two integers: " << std::endl;
    std::cout << "First integer: ";
    std::cin >> a;
    std::cout << "Second integer: ";
    std::cin >> b;

    integerdivision(a, b, quotient, remainder);
    std::cout << "Quotient: " << quotient << std::endl;
    std::cout << "Remainder: " << remainder << std::endl;

/*-------------------------------------------------------------------------*/

    double length, width;
    std::cout << "Input the length and width of a rectangle: " << std::endl;
    std::cout << "Length: ";
    std::cin >> length;
    std::cout << "Width: ";
    std::cin >> width;
    std::cout << std::endl;

    double perimeter, area;
    if (perimeterandarea(length, width, perimeter, area)) {
        std::cout << "Perimeter: " << perimeter << std::endl;
        std::cout << "Area: " << area << std::endl;
    } else {
        std::cout << "Invalid input. Please enter positive values for length and width." << std::endl;
    }
}