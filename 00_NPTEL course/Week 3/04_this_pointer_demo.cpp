// File: this_pointer_demo.cpp

#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;

public:
    // Constructor using this pointer
    Student(int roll, string name) {
        // Here parameter names are same as data members
        // So we use this-> to refer to class members
        this->roll = roll;   // left side = class member
        this->name = name;   // right side = constructor parameter
    }

    void display() {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
    }

    // Function returning current object using this
    Student* getAddress() {
        return this;  // returns address of current object
    }
};

int main() {
    Student s1(101, "Iman");

    s1.display();

    // Getting address of object using this indirectly
    cout << "Address of s1: " << &s1 << endl;
    cout << "Address returned by getAddress(): " << s1.getAddress() << endl;

    return 0;
}
