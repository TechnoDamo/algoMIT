#include <bits/stdc++.h>
using namespace std;

vector<int> toBinary(int n) {
    vector<int> bin;
    while (n != 0) {
        bin.push_back(n % 2);
        n /= 2;
    }

    return bin;
}

vector<int> AddBinary(const vector<int> &A, const vector<int> &B) {
    vector<int> C(A.size() + 1, 0);
    for (int i = 0; i < A.size(); i++) {
        C[i] += (A[i] + B[i]);
        if (C[i] > 1) {
            C[i+1]++;
            C[i] = C[i]%2;
        }
    }


    return C;
}

int toDecimal(const vector<int> &bin) {
    int x = 0;
    int t = 1;
    for (int i = 0; i < bin.size(); i++) {
        x += bin[i] * t;
        t *= 2;
    }
    return x;
}

int main() {
    for (int a = 1; a < 10000; a+=100) {
        for (int b = 1; b < 10000; b+=100) {
            vector<int> A = toBinary(a);
            vector<int> B = toBinary(b);
            vector<int> C = AddBinary(A, B);
            if (A.size() != B.size()) continue;
            cout << a << " + " << b << " = " << toDecimal(C) << endl;
            if (a + b != toDecimal(C)) {
                cout << "wrong result";
                return 0;
            }
        }
    }

    return 0;
}
