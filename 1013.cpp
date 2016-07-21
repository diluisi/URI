#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int a, b, c; 
		
	while (cin >> a >> b >> c){
	
	cout << max(a, max(b, c)) << " eh o maior" << endl;
		
	}
	return 0;
}