#include <iostream>
#include <cmath>

#include "Calculator.cpp"

class AdvancedCalculator: public Calculator {

    double getResultFrom(char op) {
        try {
            return Calculator::getResultFrom(op);
        } catch (int e) {
            if(e == 1)
                switch(op) {
                    case '^':
                        return this->getPow();
                    case '√':
                        return this->getSquareRoot();
                    default:
                        throw e;
                }
        }
    }

    double getPow() {
        return (double) pow(this->getOperand1(), this->getOperand2());
    }

    double getSquareRoot() {
        return (double) sqrt(this->getOperand1());
    }

};