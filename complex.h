/**
 * complex.h
 * Josh Harshman
 * 07/07/15
 **/
#ifndef __COMPLEX_H__
#define __COMPLEX_H__
#include <iostream>
using namespace std;

class Complex {


        private:
                int real, imag;
        public:
                Complex(int r=0, int i=0);
                ~Complex() {};
                Complex(const Complex &orig);

                int getReal() const { return real; }
                int getImag() const { return imag; }

                void setReal(int r);
                void setImag(int i);

                bool operator==(Complex rhs);
                bool operator!=(const Complex &rhs) { return !(*this == rhs);}
                
};
                Complex operator+(const Complex &left, const Complex &right);
                Complex operator-(const Complex &left, const Complex &right);
                Complex operator*(const Complex &left, const Complex &right);
                ostream &operator<<(ostream &out, const Complex &c);
                istream &operator>>(istream &in, Complex &c);
                void displaymenu();
                void selectionhandler(int &choice);
#endif
