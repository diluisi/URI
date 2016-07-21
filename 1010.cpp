#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv)
{
	int peca1, num_peca1, peca2, num_peca2;
	float valor1, valor2;
	
	cin >> peca1 >> num_peca1 >> valor1;
	cin >> peca2 >> num_peca2 >> valor2;
	
	cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << num_peca1 * valor1 + num_peca2 * valor2 << endl;	

	return 0;
}