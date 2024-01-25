#include <bits/stdc++.h>
using namespace std;

void swap(vector<int> &A, int ind1, int ind2) {
    int temp = A[ind2];
    A[ind2] = A[ind1];
    A[ind1] = temp;
}

void bubbleSort(vector<int> &A) {
    for (int i = 0; i < A.size(); i++) {
        for (int j = A.size() - 1; j >= i+1; j--) {
            if (A[j] < A[j-1]) swap(A, j, j-1);
        }
    }
}

int main() {
    vector<int> A;
    int x;
    cin >> x;
    A.push_back(x);
    while (x != 0) {
        cin >> x;
        A.push_back(x);
    }
    A.pop_back();
    bubbleSort(A);
    for (int i : A) {
        cout << i << " ";
    }
}
