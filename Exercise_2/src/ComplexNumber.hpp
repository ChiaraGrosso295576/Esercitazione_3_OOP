#ifndef __COMPLEX_H // Header guards
#define __COMPLEX_H

#include <iostream>
#include <cmath>

using namespace std;

namespace ComplexLibrary{

struct Complex
{

    double real;
    double imaginary;

    Complex(double a, double b):
        real(a),
        imaginary(b)
    {

    }

    Complex() = default; // Default constructor.

    Complex to_conjugate();
};

ostream& operator<<(ostream& os,const Complex &c);

Complex operator+(const double &d1, const Complex &c2);

Complex operator+(const Complex &c1, const Complex &c2);

bool operator==(const Complex &c1, const Complex &c2);

}

#endif
