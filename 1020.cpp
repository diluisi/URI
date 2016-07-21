#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int a, ano, mes, dia;
	
	while (cin >> a){
		
		ano = a / 365;
		mes = a % 365 / 30;
		dia = a % 365 % 30;
		
		cout << ano << " ano(s)" << endl;
		cout << mes << " mes(es)" << endl;
		cout << dia << " dia(s)" << endl;
	}
	return 0;
}