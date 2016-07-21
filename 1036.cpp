#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	
	double A, B, C;
	
	while (cin >> A >> B >> C){
	
		double D, E, X1, X2;
		D = 2 * A;
		E = B * B - 4 * A * C;
	
		if (D != 0 && E >= 0){
			
			X1 = (-B + sqrt(E)) / D;
			X2 = (-B - sqrt(E)) / D;
			cout << fixed << setprecision(5) << "R1 = " << X1 << endl;
			cout << fixed << setprecision(5) << "R2 = " << X2 << endl;
		}	
		else
		{
			cout << "Impossivel calcular" << endl;
		}
	}
	return 0;
}