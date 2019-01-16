// File: basics.cpp
// Created by: Matthew Bednarski
// Created on 1/15/19


#include <iostream>
using namespace std;

int main() {
    double a;
    int b, c;
    char Character;
    // solution here
    cout << "Enter a character: ";
    cin >> Character;
    cout << "Enter a value for double value a: ";
    cin >> a;
    cout << "Enter a value for integer value b: ";
    cin >> b;
    cout << "Enter a value for integer value c: ";
    cin >> c;

    cout << "Your character is " << Character << endl;
    cout << "Your value for a is " << a << endl;
    cout << "Your character is " << b << endl;
    cout << "Your character is " << c << endl;

    cout << "The reciprocal of a is " << 1/a << endl;
    cout << "a/b is " << a/c << endl;
    cout << "a + b + c is " << a+b+c << endl;

    cout << "The reciprocal of b is " << 1/b << endl;
    cout << "The reciprocal of c is " << 1/c << endl;
    cout << "b/c is  " << b/c << endl;
    cout << "b modulus c is " << b%c  << endl;






    return 0;
}