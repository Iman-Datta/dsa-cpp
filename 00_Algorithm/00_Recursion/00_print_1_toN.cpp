# include <iostream>

using namespace std;

void print0toN(int num){
    if(num < 1){
        return;
    }
    print0toN(num - 1);
    cout << num << "\t";
    // return print0toN(num - 1);
}

int main(){
    int num;
    cout << "Enter your number: ";
    cin >> num;

    print0toN(num);
    return 0;
}