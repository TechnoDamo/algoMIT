#include <iostream>
using namespace std;

void insertionSort(int m[], int n) {
    if (n == 1) { return; }
    for (int i = 1; i < n; i++) {
        int key = m[i];
        int j = i - 1;
        while (j > -1 && m[j] < key) {
            m[j + 1] = m[j];
            j--;
        }
        m[j+1] = key;
    }
}

int main() {
    int n;
    cout << "Amount of elements to sort:";
    cin >> n;
    int *m = new int[n];
    cout << "Input elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> m[i];
    }

    insertionSort(m, n);

    for (int i = 0; i < n; i++) {
        cout << m[i] << " ";
    }

    return 0;
}
