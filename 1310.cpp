#include <cstdio>

using namespace std;

//#define sc1(a) scanf("%d", &a)
//#define for(i,a,n) for(int (i) = (a); (i) < (n); (i)++)

int lucro[51];

int main(void)
{
	int dias, custo, receita, max, tmax;

	while(scanf("%d", &dias) == 1)
	{
		scanf("%d", &custo);
		max = 0, tmax = 0;

		for(int i = 0; i < dias; i++)
		{
			scanf("%d", &receita);
			lucro[i] = receita - custo;
		}
		
		for(int i = 0; i < dias; i++)
		{
			tmax += lucro[i];
			if(tmax < 0)
				tmax = 0;
			if(max < tmax)
				max = tmax;
		}

		printf("%d\n", max);
	}

	return 0;
}