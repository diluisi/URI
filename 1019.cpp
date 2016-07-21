#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int a, hora, min, seg;
	
	while(cin >> a){
		
		hora = a / 3600;
		min = a / 60 % 60;
		seg = a % 60;
		
		cout << hora << ":" << min << ":" << seg << endl;
		
	}
	return 0;
}