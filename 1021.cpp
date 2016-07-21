#include <iostream>
#include <iomanip>
#include <vector>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv)
{
	double num;
	int moeda[] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};
	int troco[12];
	memset(troco, 0, sizeof(troco));
	
	while (cin >> num){
		int n = num * 100;	
		cout << "NOTAS:" << endl;
		for (int i = 0; i < 6; i++){
		troco[i] = n / moeda[i];
		n = n % moeda[i];
		cout << troco[i] << " nota(s) de R$ " << fixed << setprecision(2) << (float) moeda[i]/100 << endl;
		}
	
		cout << "MOEDAS:" << endl;
		for (int i = 6; i < 12; i++){
		troco[i] = n / moeda[i];
		n = n % moeda[i];
		cout << troco[i] << " moeda(s) de R$ " << fixed << setprecision(2) << (float) moeda[i]/100 << endl;
		}			
	}
	return 0;
}