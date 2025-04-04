#include "polynomial.h"
#include <iostream>

Term::Term() : coeff(nullptr), expo(0), size(0) {}

Term::Term(int c, int e) : expo(nullptr), size(1) {
    coeff = new int[1];  
    coeff[0] = c;
}

Term::~Term() {
    delete[] coeff;
}

Term Term::operator+(const Term& other) const {
    if (expo == other.expo) {
        Term result;
        // (coeff[0] + other.coeff[0], expo);
        result.coeff = new int[1];
        result.coeff[0] = this->coeff[0] + other.coeff[0];
        result.expo = this->expo;
        result.size = 1;
        return result;
    }
    return *this; 
}

Term Term::operator-(const Term& other) const {
    if (expo == other.expo) {
        Term result;
        // (coeff[0] + other.coeff[0], expo);
        result.coeff = new int[1];
        result.coeff[0] = this->coeff[0] - other.coeff[0];
        result.expo = this->expo;
        result.size = 1;
        return result;
    }
    
    return *this; 
}

void Term::sort(){
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (expo[i] < expo[j]) {  // 지수를 기준으로 내림차순 정렬
                std::swap(expo[i], expo[j]);
                std::swap(coeff[i], coeff[j]);
            }
        }
    }
}
