#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	float a, b, c, t1, t2, t3, area, peri;
	
	cin >> a >> b >> c;
	
	t1 = b - c;
	t2 = a - c;
	t3 = a - b;
	
	if ( (abs(t1) < a && a < (b + c)) || (abs(t2)< b && b < (a + c)) || (abs(t3) < c && c < (a + b))){
		
		peri = a + b + c;		
		cout << fixed << setprecision(1) << "Perimetro = " << peri << endl;
	}
	else
	{
		area = ((a + b) * c )/ 2;		
		cout << fixed << setprecision(1) << "Area = " << area << endl;
	}
	
	
	return 0;
}