/**
 * complex.h
 * Josh Harshman
 * 07/07/15
 **/

#include <iostream>
using namespace std;

class Complex {


        private:
                int real, imag;
        public:
                Complex(int r, int i);
                ~Complex();
                Complex(const Complex &orig);

                int getReal() { return real; }
                int getImag() { return imag; }

                void setReal(int r);
                void setImag(int i);

                bool operator==(Complex rhs);
                bool operator!=(const Complex &rhs) { return !(*this == rhs);}
                
};
                Complex operator+(const Complex &left, const Complex &right);
                Complex operator-(const Complex &left, const Complex &right);
                Complex operator*(const Complex &left, const Complex &right);
                ostream &operator<<(ostream &out, const Complex &c);
                istream &operator>>(istream &in, const Complex &c);

