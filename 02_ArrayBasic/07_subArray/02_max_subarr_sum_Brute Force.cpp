// Brute Force



# include <iostream>

using namespace std;

int main () {
    int arr[] = {3,-4,5,4,-1,7,-8};
    int size = sizeof(arr)/sizeof(int);

    int max_sum = 0;
    for (int st = 0; st < size; st ++) {
        int current_sum = 0;
        for (int end = st; end < size; end ++){
            current_sum += arr[end];
            max_sum = max(current_sum, max_sum);
        }
    }
    cout << "The maximum sub-array sum: " << max_sum << endl;
    return 0; 
}