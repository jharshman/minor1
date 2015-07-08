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
        out << c.getReal() << "+" << c.getImag() << "i" << endl;
        return out;
}

istream &operator>>(istream &in, Complex &c) {
        int r, i;
        in >> r >> i;
        c.setReal(r);
        c.setImag(i);
        return in;
}
Complex operator+(const Complex &left, const Complex &right) {
        Complex temp;
        temp.setReal(left.getReal() + right.getReal());
        temp.setImag(left.getImag() - right.getImag());
        return temp;
}
Complex operator-(const Complex &left, const Complex &right) {
        Complex temp;
        temp.setReal(left.getReal() + right.getReal());
        temp.setImag(left.getImag() + right.getImag());
        return temp;
}

Complex operator*(const Complex &left, const Complex &right) {
        Complex temp;
        temp.setReal( ((left.getReal())*(right.getReal()))-((left.getImag())*(right.getImag())) );
        temp.setImag( ((left.getReal())*(right.getImag()))+((right.getReal())*(left.getImag())) );
        return temp;
}
