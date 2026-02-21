# include <iostream>

using namespace std;

int factorial(int n){
    if (n == 0){
        return 1;
    }
    return n * factorial(n-1);
}

int main(){
    int num, ans;
    cout << "Enter your number: ";
    cin >> num;

    ans = factorial(num);
    cout << "Factorial of your number is: " << ans << endl;
    return 0;
}