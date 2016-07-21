#include <iostream>
#include <iomanip>
#define pi 3.14159
using namespace std;

int main(int argc, char** argv)
{
	double a, b, c, triangulo, circulo, trapezio, quadrado, retangulo;
	
	while ( cin >> a >> b >>c){
		
	triangulo = (a * c )/2;
	circulo = pi * c * c;
	trapezio = ((a + b) * c) / 2;
	quadrado = b * b;
	retangulo = a * b;
	
	cout << "TRIANGULO: " << fixed << setprecision(3) << triangulo << endl;
	cout << "CIRCULO: " << fixed << setprecision(3) << circulo << endl;
	cout << "TRAPEZIO: " << fixed << setprecision(3) << trapezio << endl;
	cout << "QUADRADO: " << fixed << setprecision(3) << quadrado << endl;
	cout << "RETANGULO: " << fixed << setprecision(3) << retangulo << endl;	
	}
	
	return 0;
}