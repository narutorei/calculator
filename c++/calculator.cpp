#include <iostream>

class Calculator {

    protected:

        double operand1;

        double operand2;

    public:

        void Calculator () {
            this->setOperand1(0);
            this->setOperand2(0);
        }

        void Calculator(double op1, double, op2) {
            this->setOperand1(op1);
            this->setOperand2(op2);
        }

        double Calculator(char op, double op1, double op2) {
            this->setOperand1(op1);
            this->setOperand2(op2);

            return this->getResultFrom(op);
        }

        void setOperand1(double op) {
            this->operand1 = op;
        }

        double getOperand1() {
            return this->operand1;
        }

        void setOperand2(double op) {
            this->operand2 = op;
        }

        double getOperand2() {
            return this->operand2;
        }

        virtual double getResultFrom(char op) {
            switch(op) {
                case '+':
                    return this->getSum();
                case '-':
                    return this->getSub();
                case '/':
                    return this->getDiv();
                case '*':
                    return this->getMult();
                default:
                    throw 1;
            }
        }

        double getSum() {
            return this->getOperand1() + this->getOperand2();
        }

        double getSub() {
            return this->getOperand1() - this->getOperand2();
        }

        double getDiv() {
            return this->getOperand1() / this->getOperand2();
        }

        double getMult() {
            return this->getOperand1() * this->getOperand2();
        }

};