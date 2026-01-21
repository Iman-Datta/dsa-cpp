# include <iostream>
# include <vector>

using namespace std;

int main() {
    vector<int>vec1;

    vector<int>vec = {1,2,3};
    cout << vec[0]<< endl;

    for (int i: vec){
        cout << i << "\n";
    }

    vector<int>vec2(3,0);
    return 0;
}