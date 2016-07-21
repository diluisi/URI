#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	float x1, y1, x2, y2, resultado;
	
	while (cin >> x1 >> y1 >> x2 >> y2){
		
		resultado  = sqrt(pow((x2 - x1),2) + pow((y2 - y1), 2));
		
		cout << fixed << setprecision(4) << resultado << endl;
	}
	
	return 0;
}