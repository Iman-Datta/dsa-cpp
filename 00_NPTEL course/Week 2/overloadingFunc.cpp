// Function overloading
//Function overloading is called static polymorphism.
#include <iostream>

using namespace std;

int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

int multiply(int a, int b) {
    return a * b;
}

// double version
double multiply(double a, double b) {
    return a * b;
}

int main() {
    cout << "Addition (2, 3): " << add(2, 3) << endl;
    cout << "Addition (2, 3, 4): " << add(2, 3, 4) << endl;

    cout << "Multiplication int (3, 4): " << multiply(3, 4) << endl;
    cout << "Multiplication double (2.5, 4.2): " << multiply(2.5, 4.2) << endl;

    return 0;
}


// Overloading allows static polymorphism.