#include "ComplexNumber.hpp"

namespace ComplexLibrary{

ostream& operator<<(ostream& os, const Complex &c)
{
    double epsilon = 1.111e-16 ;
    if (abs(c.imaginary)<epsilon)     //c reale in aritmetica del calcolatore
        if (abs(c.real)<epsilon)
            os << 0;
        else
            os << c.real;
    else if (abs(c.real)< epsilon && abs(c.imaginary)>epsilon) //c immaginario puro in aritmetica del calcolatore
        os<<c.imaginary<<"i";
    else if (c.imaginary>epsilon) //c ha parte immaginaria positiva in precisione finita
        os<<c.real<<"+"<<c.imaginary<<"i";
    else //c ha parte immaginaria negativa in precisione finita
        os<<c.real<<c.imaginary<<"i";
    return os;
}
Complex operator+(const double &d1, const Complex &c2)
{
    Complex c(d1+ c2.real,c2.imaginary);
    return c;
}
Complex operator+(const Complex &c1, const Complex &c2)
{
    Complex c(c1.real + c2.real,c1.imaginary + c2.imaginary);
    return c;
}

bool operator==(const Complex &c1, const Complex &c2)
{
    double epsilon = 1.111e-16 ;
    return (abs(c1.real-c2.real)<epsilon && abs(c1.imaginary-c2.imaginary)<epsilon);
}
Complex Complex::to_conjugate()
{
    Complex c(real,-imaginary);
    return c;
}
}
