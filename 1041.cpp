#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	float x, y;
	
	while(scanf("%f %f",&x,&y)==2)
{
		
		if (x == 0.0 && y == 0.0){
			
			cout << "Origem" << endl;
		}
		else if (x==0.0)
		{
			cout << "Eixo X" << endl;
		}
		else if (y== 0.0)
		{
			cout << "Eixo Y" << endl;
		}
		else if (x > 0.0 && y > 0.0)
		{
			cout << "Q1" << endl;
		}
		else if (x > 0.0 && y < 0.0)
		{
			cout << "Q4" << endl;
		}
		else if (x < 0.0 && y > 0.0)
		{
			cout << "Q2" << endl;
		}
		else
		{
			cout << "Q3" << endl;
		}
}	
	return 0;
}