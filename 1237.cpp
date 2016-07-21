#include <cstring>
#include <iostream>

using namespace std;

int main() {

    char A[55];
    char B[55];

    while (cin.getline(A, 55)) {
        cin.getline(B, 55);
        
        int n1 = strlen(A);
        int n2 = strlen(B);
        int constante = 0;
        int L[n1][n2];
        memset(L, 0, sizeof(L));

        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < n2; j++) {
                if (A[i] != B[j]) {
                    L[i][j] = 0;
                } else {
                    L[i][j] = 1;
                    constante = max(L[i][j], constante);
                    if (i > 0 && j > 0) {
                        L[i][j] += L[i - 1][j - 1];
                        constante = max(L[i][j], constante);
                    }
                }
            }

        }

        cout << constante << endl;
    }


    return 0;
}