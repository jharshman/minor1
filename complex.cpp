/**
 * complex.cpp
 * Josh Harshman
 * 07/07/15
 * */
#include "complex.h"

Complex::Complex(int r, int i) {
        setReal(r);
        setImag(i);
}

Complex::Complex(const Complex &orig) {
        setReal(orig.getReal());
        setImag(orig.getImag());
}

void Complex::setReal(int r) { 
        real=r;
}

void Complex::setImag(int i) {
        imag=i;
}

ostream &operator<<(ostream &out, const Complex &c) {
        out << c.getReal() << " " << c.getImag();
        return out;
}

istream &operator>>(istream &in, const Complex &c) {
        in >> c.real >> c.imag;
        return in;
}

Complex &operator+(const Complex &left, const Complex &right) {

}

Complex &operator-(const Complex &left, const Complex &right) {

}

Complex &operator*(const Complex &left, const Complex &right) {

}
