# include <iostream>
# include <vector>

using namespace std;

vector <int> bubbleSort (vector<int> vec, int n) {
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n - i - 1; j ++) {
            if (vec[j] > vec[j + 1]) {
                swap(vec[j],  vec[j + 1]);
            }
        }
    }
    return vec;
}

int main () {
    int n;
    vector <int> vec;
    vector <int> sortedVec;
    cout << "Enter the number of element: ";
    cin >> n;
    for (int i = 0; i < n; i ++) {
        int temp;
        cout << "Enter your" << i + 1 <<  "element: :" ;
        cin >> temp;
        vec.push_back(temp);
    }
    sortedVec = bubbleSort(vec, n);
    for (int val : sortedVec) {
        cout << val << " ";
    }
    return 0;
}