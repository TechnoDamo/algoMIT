#include <bits/stdc++.h>
using namespace std;

void Merge(vector<int> &A, int p, int q, int r) {
    int nL = q - p + 1;
    int nR = r - q;
    vector<int> L(nL, 0);
    vector<int> R(nR, 0);
    for (int i = 0; i < nL; i++) {
        L[i] = A[p+i];
    }
    for (int i = 0; i < nR; i++) {
        R[i] = A[q+1+i];
    }
    int i = 0, j = 0, k = p;
    while (i < nL && j < nR) {
        if (L[i] <= R[i]) {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < nL) {
        A[k] = L[i];
        i++;
        k++;
    }
    while (j < nR) {
        A[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int> &A, int p, int r) {
    if (p >= r) {
        return;
    }
    int q = (p + r) / 2;
    mergeSort(A, p, q);
    mergeSort(A, q+1, r);

    Merge(A, p, q, r);
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
    mergeSort(A, 0, A.size()-1);
    for (int i : A) {
        cout << i << " ";
    }
}
