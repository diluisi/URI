#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	string nome;
	float salario, venda;
	
	while (cin >> nome >> salario >> venda){
		
		cout << "TOTAL = R$ " << fixed << setprecision(2) << salario + 0.15 * venda << endl;
			
	} 
	
	return 0;
}