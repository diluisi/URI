#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	int a , b;
	
	cin >> a >> b;
	
	if (b % a == 0 || a % b == 0){
		cout << "Sao Multiplos" << endl;
	}
	else
	{
		cout << "Nao sao Multiplos" << endl;
	}	
	return 0;
}