// Given an m x n matrix, return all elements of the matrix in spiral order.

# include <iostream>
# include <vector>

using namespace std;

vector<int> spiral(vector<vector<int>> &matrix) {
    int n = matrix.size(); // Row
    int m = matrix[0].size(); // Column

    vector<int> ans;

    int top = 0, buttom = n -1, right = m - 1, left = 0;

    while (top <= buttom && left <= right){
        // Top
        for(int i = left; i <= right; i++){
            ans.push_back(matrix[top][i]);
        }
        top ++;
        
        // Right
        for(int i = top; i <= buttom; i ++){
            ans.push_back(matrix[i][right]);
        }
        right --;

        // Buttom
        if(top <= buttom) {
            for(int i = right; i >= left; i--){
                ans.push_back(matrix[buttom][i]);
            }
            buttom --;
        }

        if(left <= right) {
            for(int i = buttom; i >= top; i--){
                ans.push_back(matrix[i][left]);
            }
            left ++;
        }
    }

    return ans;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
    };

    // Print original matrix
    cout << "Original Matrix:\n";
    for(int i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix[0].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Call spiral function
    vector<int> result = spiral(matrix);

    // Print spiral result
    cout << "\nSpiral Order:\n";
    for(int x : result) {
        cout << x << " ";
    }

    return 0;
}