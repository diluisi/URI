#include <iostream>
#include <iomanip>
#define consumo 12
using namespace std;

int main(int argc, char** argv)
{
	double a, b;
	
	while(cin >> a >> b){
	
		cout << fixed << setprecision(3) << a * b / consumo << endl;
	}
	return 0;
}