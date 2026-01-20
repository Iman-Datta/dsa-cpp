# include <iostream>
# include <vector>

using namespace std;

vector<int> findFibonacchi(int n) {
    vector<int> vec;
    
    if (n == 0) {
        vec.push_back(0);
        return vec;
    }
    else if(n == 1) {
        vec.push_back(0);
        vec.push_back(1);
        return vec;
    }
    else {
        vec.push_back(0);
        vec.push_back(1);
        for (int i = 2; i <= n; i ++) {
            vec.push_back(vec[i - 1] + vec[i - 2]);
        }
        return vec;
    }
}

int main () {
    int num;
    vector<int> fibonacchi;
    cout << "Enter the value of n: ";
    cin >> num;

    fibonacchi = findFibonacchi(num);
    for (int i : fibonacchi) {
        cout << i << " ";
    }
    return 0;
}