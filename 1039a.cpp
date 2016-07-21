#include <iostream>
#include <stdio.h>
#include<vector>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main(int argc, char** argv)
{
	double R1, X1, Y1, R2, X2, Y2;
	double dist;
	
	while(cin >> R1 >> X1 >> Y1 >> R2 >> X2 >> Y2){

		dist = sqrt((X1 - X2)*(X1-X2) + (Y1 - Y2)*(Y1-Y2));
		
		if (R1 >= dist + R2){
			printf("RICO\n");
		}
		else
		{
			printf("MORTO\n");
		}		
		
	}
	 
	
	return 0;
}