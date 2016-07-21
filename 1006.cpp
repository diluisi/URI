#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	double a, b, c;	
	while (cin >> a >> b >> c){
	cout << "MEDIA = " << fixed << setprecision(1) << (2 * a + 3 * b + 5 * c) /10 << endl;	
	}
	return 0;
}