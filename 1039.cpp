#include<iostream>
#include<vector>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	double valor[] = {4.00,4.50,5.00,2.00,1.50};
	int a, b;
	
	while(cin >> a >> b){
	
	cout << "Total: R$ " << fixed << setprecision(2) << valor[a - 1] * b << endl;
	
	}
	
	return 0;
}