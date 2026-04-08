# include <iostream>
# include <vector>

using namespace std;

void setMatZeroes(vector<vector<int>> &matrix){
    int n = matrix.size();
    int m = matrix[0].size();

}

int main() {
    vector<vector<int>> matrix = {
        {1,1,1},
        {1,0,1},
        {1,1,1},
    };

    //Print original matrix
    cout << "Original Matrix:\n";
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[0].size(); j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Call Set matrix zeroes
    setMatZeroes(matrix);

    cout << "\nModified Matrix:\n";
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[0].size(); j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}