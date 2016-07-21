#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	int a, b, c, temp;
	int array[3];
	
	cin >> a >> b >> c;
	
    array[0] = a;
    array[1] = b;
    array[2] = c;
		
		for (int i = 0; i < 3; i++){
			
			for (int j = 0; j < 3; j++){
				
				if (array[i] < array[j]){
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
				}		
			}
		}
	
		cout << array[0] << endl << array[1] << endl << array[2] << endl << endl;
		
		cout << a << endl << b << endl << c << endl;
		
	return 0;
}