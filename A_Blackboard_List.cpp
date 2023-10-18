#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void normalize(vector<double>& vec) {
    double magnitude = 0.0;
    for (double value : vec) {
        magnitude += value * value;
    }
    magnitude = sqrt(magnitude);

    for (double& value : vec) {
        value /= magnitude;
    }
}

void orthogonalize(vector<vector<double>>& vectors, int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            double projection = 0.0;
            for (int k = 0; k < vectors[i].size(); k++) {
                projection += vectors[i][k] * vectors[j][k];
            }

            for (int k = 0; k < vectors[i].size(); k++) {
                vectors[i][k] -= projection * vectors[j][k];
            }
        }
    }
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    vector<vector<double>> vectors(rows, vector<double>(cols));

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        cout << "Vector " << i + 1 << ": ";
        for (int j = 0; j < cols; j++) {
            cin >> vectors[i][j];
        }
    }

    orthogonalize(vectors, rows);

    for (int i = 0; i < rows; i++) {
        normalize(vectors[i]);
        cout << "Vector " << i + 1 << ": ";
        for (double value : vectors[i]) {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}
