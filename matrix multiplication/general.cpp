#include <bits/stdc++.h>
using namespace std;

bool checkInput(const vector<vector<int>> &A, const vector<vector<int>> &B) {
    if (A[0].size() != B.size()) {
        cout << "Amount of columns in the 1-st matr. != amount of rows in the 2-nd matr.";
        return false;
    }
    int n = A[0].size();
    for (int i = 1; i < A.size(); i++) {
        if (n != A[i].size()) {
            cout << "Not all rows of the first matrix are of the same length";
            return false;
        }
    }
    n = B[0].size();
    for (int i = 1; i < B.size(); i++) {
        if (n != B[i].size()) {
            cout << "Not all rows of the second matrix are of the same length";
            return false;
        }
    }
    return true;
}

void inputMatrix(vector<vector<int>> &A) {
    cout << "Input Matrix: " << endl;
    for (int i = 1; i < A.size(); i++) {
        for (int j = 1; j < A[i].size(); j++) {
            cin >> A[i][j];
        }
    }
}

vector<vector<int>> matrixMultiply(const vector<vector<int>> &A, const vector<vector<int>> &B) {
    vector<int> c(B[0].size(), 0);
    vector<vector<int>> C(A.size(), c);
    for (int i = 1; i < A.size(); i++) {
        for (int j = 1; j < A.size(); j++) {
            for (int k = 1; k < A.size(); k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return C;
}

void outputMatrix(const vector<vector<int>> &A) {
    for (int i = 1; i < A.size(); i++) {
        for (int j = 1; j < A[i].size(); j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Input square matrix size: ";
    cin >> n;
    vector<int> a(n+1, 0);
    vector<vector<int>> A(n+1, a);
    vector<int> b(n+1, 0);
    vector<vector<int>> B(n+1, a);
    inputMatrix(A);
    inputMatrix(B);
    checkInput(A, B);
    outputMatrix(matrixMultiply(A, B));
    return 0;
}
