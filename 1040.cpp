#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	double N1, N2, N3, N4, media, exame, mediaf;
	
	while(cin >> N1 >> N2 >> N3 >> N4){
	
	media =  (N1*2 + N2*3 + N3*4 + N4*1)/ 10;

	cout << fixed << setprecision(1) << "Media: " << media << endl;
	
	if (media >= 7){
		cout << "Aluno aprovado." << endl;
	}
	else if (media <= 6.9 && media >= 5)
	{
		cout << "Aluno em exame." << endl;
		cin >> exame;
		cout << fixed << setprecision(1) << "Nota do exame: " << exame << endl;
		mediaf = (exame + media)/2;
		if (mediaf >= 5){
			
			cout <<  "Aluno aprovado." << endl;
			cout <<  fixed << setprecision(1) << "Media final: " << mediaf << endl;
		}
		else{
			cout <<  "Aluno reprovado." << endl;
			cout <<  fixed << setprecision(1) << "Media final: " << mediaf << endl;
		}
	}
	else
	{
		cout << "Aluno reprovado." << endl;
	}
	
	return 0;
	
	}
}