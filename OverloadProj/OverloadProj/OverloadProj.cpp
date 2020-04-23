// OverloadProj.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <cstdio>
#include <iostream>
using namespace std;

class Rational
{
    int _n = 0;
    int _d = 1;
public:
    Rational(int numerator = 0, int denominator = 1) : _n(numerator), _d(denominator) {};
    Rational(const Rational& rhs) : _n(rhs._n), _d(rhs._d) {};
    ~Rational();
    inline int numerator()const { return _n; };
    inline int denominator()const { return _d; };
    Rational& operator = (const Rational&);
    Rational operator + (const Rational&) const;
    Rational operator - (const Rational&) const;
    Rational operator * (const Rational&) const;
    Rational operator / (const Rational&) const;

};

Rational::~Rational()
{
    _n = 0; _d = 1;
}
Rational& Rational::operator = (const Rational& rhs)
{
    if (this != &rhs)
    {
        _n = rhs.numerator();
        _d = rhs.denominator();
    }
    return *this;
}

Rational Rational::operator + (const Rational& rhs) const 
{
    return Rational((_n * rhs._d) + (_d * rhs._n), _d * rhs._d);
}

Rational Rational::operator - (const Rational& rhs) const
{
    return Rational((_n * rhs._d) - (_d * rhs._n), _d * rhs._d);
}

Rational Rational::operator * (const Rational& rhs) const
{
    return Rational(_n * rhs._n, _d * rhs._d);
}

Rational Rational::operator / (const Rational& rhs) const
{
    return Rational(_n * rhs._n, _d * rhs._d);
}

std::ostream& operator << (std::ostream& o, const Rational& r)
{
    if (r.denominator() == 1) return o << r.numerator();
    else return o << r.numerator() << '/' << r.denominator();
}
int main()
{
    Rational a = 11;
    cout << "\na is: " << a;
    Rational b(7, 3);
    cout << "\nb is: " << b;
    Rational c = b;
    cout << "\nc is: " << c;
    Rational d;
    cout << "\nd is: " << d;
    d = c;
    cout << "\nd is: " << d << endl;

    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
