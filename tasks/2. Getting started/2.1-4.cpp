#include <bits/stdc++.h>
using namespace std;

int findInd(const vector<int> &v, int x) {
    for (int i = 1; i < v.size(); i++) {
        if (v[i] == x) return i;
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n+1, 0);
    for (int i = 1; i < n+1 ; i++) {
        cin >> v[i];
    }
    cout << "element to find: ";
    int x;
    cin >> x;
    cout << findInd(v, x);

    return 0;
}
