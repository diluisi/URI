#include <iostream>
#include <stdio.h>
#include <vector>
#include <stdlib.h>
#include <string.h>
using namespace std;


int main (){
	
	int casos;
	
	scanf("%d", &casos);
	
	while (casos > 0){
	
	int n, capacidadeMochila;
	
	scanf("%d", &n);
	capacidadeMochila = 50;
	
	int quantidade[n];
	
	int pesoItem[n];
	
	for (int i = 0; i < n; ++i){
		scanf("%d", &quantidade[i]);
		scanf("%d", &pesoItem[i]);
	}

	int matriz[n+1][capacidadeMochila+1];
	
	memset(matriz, 0, sizeof(matriz));
	
	for (int i = 1; i < n + 1; i++){
		
		for (int j = 1; j < capacidadeMochila + 1; j++){
		
			if (pesoItem[i-1] > j){
			
			matriz[i][j] = matriz[i-1][j];
				
			}
			else {
			matriz[i][j] = max(quantidade[i-1] + matriz[i-1][j-pesoItem[i-1]], matriz[i-1][j]);
			
		}
		}
	}
		
	int max_pesoItem = matriz[n][capacidadeMochila];
	
	int pesoLevado = 0;
	int naoLevado = 0;
	
	for (int i = n; i > 0; i-- ){
		
		if (matriz[i][capacidadeMochila] != matriz[i-1][capacidadeMochila])
		{
			pesoLevado += pesoItem[i-1];
			capacidadeMochila -= pesoItem[i-1];
		}
		else{ 
		
			naoLevado++;
	
		}	
	}
	
	cout << max_pesoItem << " brinquedos" << endl;
	cout << "Peso: " << pesoLevado << " kg" << endl;
	cout << "sobra(m) " << naoLevado << " pacote(s)" << endl;
	cout << endl;

	casos--;
}

return 0;

}