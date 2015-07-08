/**
 * complex_tester.cpp
 * Josh Harshmanm
 * 07/07/15
 * */

#include "complex.h"

int main(void) {


        Complex c1, c2;

        //Get our complex numbers to tinker with
        cout << "Enter two complex numbers:";
        cin >> c1 >> c2;
        cout << "You Entered:\n" << c1 << " and " << c2 << endl;

        //demo addition & print
        cout << "Adding..." << endl;
        cout << c1 + c2 << endl;
        
        //demo subtraction & print
        cout << "Subtracting..." << endl;
        cout << c1 - c2 << endl;
        
        //demo multiplication & print
        cout << "Multiplying..." << endl;
        cout << c1 * c2 << endl;


        return 0;
}
