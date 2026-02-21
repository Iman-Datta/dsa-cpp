// You are given two arrays arr1[] and arr2[]. Your task is to find the union of these two arrays.

# include  <iostream>
# include <vector>

using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m){
    vector<int> unionVec;
    int i = 0, j = 0;
    while(i < n && j < m){
        if(i > 0 && arr1[i] == arr1[i-1]){
            i++;
            continue;
        }
        else if(j > 0 && arr2[j] == arr2[j-1]){
            j++;
            continue;
        }
        else if(arr1[i] < arr2[j]){
            unionVec.push_back(arr1[i]);
            i++;
        }
        else if(arr1[i] > arr2[j]){
            unionVec.push_back(arr2[j]);
            j++;
        }
        else{
            unionVec.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    
    while (i < n){
        if (i == 0 || arr1[i] == arr1[i-1]){
            unionVec.push_back(arr1[i]);
        }
        i++;
    }

    while (j < m) {
        if (j == 0 || arr2[j] != arr2[j - 1]) {
            unionVec.push_back(arr2[j]);
        }
        j++;
    }
    return unionVec;
}

int main () {
    int arr1[] = {1,2,3,4,5,6,7,8,9,10};
    int arr2[] = {2,3,4,4,5,11,12};
    int n = 10,m = 7;

    vector<int> ans = findUnion(arr1,arr2,n,m);
    for(int i = 0; i < ans.size(); i ++){
        cout << ans[i] << "\t";
    }
    return 0;
}