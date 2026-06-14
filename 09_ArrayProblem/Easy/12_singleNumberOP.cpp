# include <iostream>
# include <vector>

using namespace std;

int main(){
    vector<int> vec = {4,1,2,1,2};
    int ans = 0;

    for(int i = 0; i < vec.size(); i++){
        ans ^= vec[i];
    }

    cout << ans << endl;
    return 0;
}