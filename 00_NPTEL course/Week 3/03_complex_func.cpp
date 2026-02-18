# include <iostream>
# include <cmath>

using namespace std;

class Complex{
    public:
    double re, im;

    double norm(){
        return sqrt(re*re + im*im);
    }

    void print(){
        cout << "|" << re << "+j" << im << "| = ";
    }
};

int main () {
    Complex c = {4.2, 5.3};
    c.print();
}