#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;


int main(){

    int n = 1, k = 1;

    while(n != 0) {

        long long s=0;

        scanf("%d", &n);
        scanf("%d", &k);

        if (n == 0 && k == 0){
            break;
        }

        int seq[n+1];


        for (int i = 0; i < n; ++i) {
            scanf("%d", &seq[i]);
        }

        seq[n] = 10001;

        long long tabela[n+1][k+1];
        memset(tabela, 0, sizeof(tabela));

        for (int i = 0; i < n+1 ; i++) {
            tabela[i][0] = 1;
        }

        for (int i = 1; i < n+1 ; i++) {
            for (int l = 0; l < i ;l++) {
                if (seq[i] > seq[l]) {
                    for (int j = 1; j <= k; ++j) {
                        tabela[i][j] += tabela[l][j - 1];

                    }
                }
            }
        }
        s = tabela[n][k];


        cout << s << endl;

    }

    return 0;
}