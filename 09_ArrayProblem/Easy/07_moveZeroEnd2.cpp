# include <iostream>
# include <vector>

using namespace std;

int main (){
    vector<int> vec = {0,1,0,3,12};
    int count = 0;
    int k = 0;

    for(int i = 0; i < vec.size(); i++){
        if(vec[i] == 0) count ++;
        else{
            vec[k++] = vec[i]; // k = 3
        }
    }

    while(count > 0){
        vec[k++] = 0;
        count --;
    }

    for(int val : vec){
        cout << val << " ";
    }
}