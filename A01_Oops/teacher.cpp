# include <iostream>
# include <vector>
# include <string>

using namespace std;

class Teacher {
    public:
    // Properties
    string name;
    string dept;
    string subject;
    double salary;

    // method or member functions
    void changeDept(string newDept){
        dept = newDept;
    }
};

int main(){
    Teacher t1;
    Teacher t2;

    t1.name = "Iman Datta";
    t1.dept ="IOT";
    return 0;
}