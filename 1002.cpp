#include <iostream>
//#include <stdio.h>
//#include <vector>
//#include <stdlib.h>
//#include <string.h>
#include <iomanip>
#define PI 3.14159

using namespace std;

int main(int argc, char** argv)
{
	double raio, area;
	
	while (cin >> raio){
	cout << "A=" << fixed << setprecision(4) << PI*raio*raio << endl;	
	}
	return 0;
}