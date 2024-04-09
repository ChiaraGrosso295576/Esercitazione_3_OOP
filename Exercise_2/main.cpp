#include "src/ComplexNumber.hpp"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ComplexLibrary::Complex c;

    cout<< "default: "<<c<<endl;

    ComplexLibrary::Complex c1(1.,3.);

    cout<<"c1: " <<c1<<endl;

    ComplexLibrary::Complex c2(1+1.111e-16,3.);

    cout<<"c2: " << c2 << endl;


    ComplexLibrary::Complex sum = c1 + c2;

    cout << "sum of c1 and c2: " << sum << endl;


    if(c1==c2)
        cout << "the two numbers are equal" << endl;
    else
        cout << "the two numbers are not equal" << endl;


    ComplexLibrary::Complex c1Conj = c1.to_conjugate();
    ComplexLibrary::Complex c2Conj = c2.to_conjugate();

    cout << "conjugate of c1: " << c1Conj << endl;
    cout << "conjugate of c2: " << c2Conj << endl;

    cout << "sum of a double and a complex: " << 1.65 + c2 << endl;

    return 0;
}
