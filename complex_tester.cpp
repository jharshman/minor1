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


        //implement menu
        int choice;
        do {
                displaymenu();
                cout << "Enter Selection: ";
                cin >> choice;
                switch(choice) {
                        case 1:
                                //execute add
                                cout << "Addition yields: " << c1 + c2 << endl;
                                break;
                        case 2:
                                //execute subtract
                                cout << "Subtraction yields: " << c1 - c2 << endl;
                                break;
                        case 3: 
                                //execute multiply
                                cout << "Multiplication yields: " << c1 * c2 << endl;
                                break;
                        case 4:
                                //quitting
                                cout << "ending..." << endl;
                                break;
                        default:
                                //not expected
                                cout << "Please select a valid menu item." << endl;
                }
        }while(choice!=4);

        /*
        //demo addition & print
        cout << "Adding..." << endl;
        cout << c1 + c2 << endl;
        
        //demo subtraction & print
        cout << "Subtracting..." << endl;
        cout << c1 - c2 << endl;
        
        //demo multiplication & print
        cout << "Multiplying..." << endl;
        cout << c1 * c2 << endl;
        */

        return 0;
}


void displaymenu() {
        cout << "1. add" << endl;
        cout << "2. subtract" << endl;
        cout << "3. multiply" << endl;
        cout << "4. quit" << endl;
}

