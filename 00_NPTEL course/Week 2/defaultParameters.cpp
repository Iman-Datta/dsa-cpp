#include <bits/stdc++.h>

using namespace std;

int changeVal(int a = 10){ // Default value for parameter
    return a;
}

int main(){
    int x = 6, y;

    y = changeVal(x);
    cout <<"Y = " << y << endl; // Use function call | actual parameter taken as x = 6

    y = changeVal();
    cout <<"Y = " << y << endl; // Use default parameter |  actual parameter taken as a = 10
    return 0;
}



// NOTE : 
// 1. Default arguments must be written from RIGHT to LEFT. Once you give a default value to a parameter, all parameters after it must also have default values.
// example: void f(int a, int b = 5, int c = 10); => allowed |||| void f(int a = 5, int b, int c); => Wrong
