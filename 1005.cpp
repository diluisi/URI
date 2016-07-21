#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	double a, b;	
	while (cin >> a >> b){
	cout << "MEDIA = " << fixed << setprecision(5) << (3.5 * a + 7.5 * b) /11 << endl;	
	}
	return 0;
}