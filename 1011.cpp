#include <iostream>
#include <iomanip>
#define pi 3.14159

using namespace std;

int main(int argc, char** argv)
{
	
	int r; 
	double result;
	
	while (cin >> r){
	
		result = 4 / 3.0 * pi * r * r *r;
		
		cout <<	"VOLUME = " << fixed << setprecision(3) << result << endl;
		
	}
	
	return 0;
}