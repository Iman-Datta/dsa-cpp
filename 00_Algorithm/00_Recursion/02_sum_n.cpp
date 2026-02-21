# include <iostream>

using namespace std;

int sum_n(int n){
    if (n == 0){
        return 0;
    }
    return n + sum_n(n-1);
}

int main(){
    int num, ans;
    cout << "Enter your number: ";
    cin >> num;

    ans = sum_n(num);
    cout << "Summation of first N(your number) natural numbers. is: " << ans << endl;
    return 0;
}