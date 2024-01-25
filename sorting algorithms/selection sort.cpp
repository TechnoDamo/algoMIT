#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &v) {
    for (int i = 1; i < v.size(); i++) {
        int min = v[i];
        int minJ = i;
        for(int j = i; j < v.size(); j++) {
            if (min > v[j]) {
                min = v[j];
                minJ = j;
            }
        }
        int temp = v[i];
        v[i] = min;
        v[minJ] = temp;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n+1, 0);
    int x;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        v[i] = x;
    }

    selectionSort(v);

    for (int i = 1; i <= n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}
