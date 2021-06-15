//
//  Exercises3.cpp
//  Lesson75
//
//  Created by Branium on 13/06/2021.
//

#include <iostream>
using namespace std;

class Fraction {
    int denominator;
    int numerator;
public:
    Fraction() {}
    Fraction(int num, int den) : denominator(den), numerator(num) {}
    void setDenominator(int den) { denominator = den; }
    void setNominator(int num) { numerator = num; }
    int getNumerator() const { return numerator; }
    int getDenominator() const { return denominator; }
    Fraction operator + (const Fraction& other) {
        Fraction f;
        f.denominator = denominator * other.denominator;
        f.numerator = numerator * other.denominator + denominator * other.numerator;
        return f;
    }
};

template<class T> T sum(T a, T b) {
    return a + b;
}

int main() {
    // test phan so
    Fraction f1(2, 3);
    Fraction f2(1, 3);
    Fraction f = sum(f1, f2);
    int sumOfInt = sum(10, 43);
    double sumOfDouble = sum(12.24, 78.91);
    cout << "Sum of two integer numbers: " << sumOfInt << endl;
    cout << "Sum of two double numbers: " << sumOfDouble << endl;
    cout << "Sum of two fraction number: " << f.getNumerator() << "/" << f.getDenominator() << endl;
    return 0;
}
