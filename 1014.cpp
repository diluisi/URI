#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	int X;
	double Y;
	
	while (cin >> X >> Y){
		
		cout << fixed << setprecision(3) << X / Y << " km/l" << endl;
	}
	
	return 0;
}