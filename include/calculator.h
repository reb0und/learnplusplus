#ifndef CALCULATOR_H
#define CALCULATOR_H

// @TODO: Use vector instead of set parameters
int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);
double divide(int dividend, int divisor);
int modulus(int dividend, int divisor);
void calculator();
void promptNumbers(int &num1, int &num2);

#endif