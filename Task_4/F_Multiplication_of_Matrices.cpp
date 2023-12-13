#include <iostream>
#include <vector>

using namespace std;

// Function to multiply two matrices
vector<vector<int>> multiply_matrices(vector<vector<int>>& matrix_a, vector<vector<int>>& matrix_b) {
    int ra = matrix_a.size();
    int ca = matrix_a[0].size();
    int rb = matrix_b.size();
    int cb = matrix_b[0].size();

    vector<vector<int>> result(ra, vector<int>(cb, 0));

    for (int i = 0; i < ra; ++i) {
        for (int j = 0; j < cb; ++j) {
            for (int k = 0; k < ca; ++k) {
                result[i][j] += matrix_a[i][k] * matrix_b[k][j];
            }
        }
    }

    return result;
}

int main() {
    // Input for matrix A
    int ra, ca;
    cin >> ra >> ca;
    vector<vector<int>> matrix_a(ra, vector<int>(ca));
    for (int i = 0; i < ra; ++i) {
        for (int j = 0; j < ca; ++j) {
            cin >> matrix_a[i][j];
        }
    }

    // Input for matrix B
    int rb, cb;
    cin >> rb >> cb;
    vector<vector<int>> matrix_b(rb, vector<int>(cb));
    for (int i = 0; i < rb; ++i) {
        for (int j = 0; j < cb; ++j) {
            cin >> matrix_b[i][j];
        }
    }

    // Check if matrices can be multiplied
    if (ca != rb) {
        cout << "Matrices cannot be multiplied." << endl;
    } else {
        auto result_matrix = multiply_matrices(matrix_a, matrix_b);
        for (int i = 0; i < ra; ++i) {
            for (int j = 0; j < cb; ++j) {
                cout << result_matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
