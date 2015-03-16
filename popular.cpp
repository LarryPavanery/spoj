#include <iostream>
#include <string>
#include <cmath>

#define PRINT(a) cout << a << endl;
#define ATUALIZA() INICIO = 1986
const int ANOS = 76;

using namespace std;



int main()
{
	int A, INICIO = 1986;
	while(scanf("%d", &A) == 1 && A >= 2010 && A <= 10000)
	{
		while(!(A < (INICIO + ANOS)))
		{	INICIO += ANOS;
		}
		PRINT(INICIO + ANOS);
		ATUALIZA();
	}
return 0;
}