#include <iostream>

using namespace std;


int main()
{
	int V, I(0), J(0), K(0), L(0), v(1); // B$ 50,00, B$10,00, B$5,00 e B$1,00
	while(scanf("%d", &V) == 1 && V != 0)
	{
		while(V > 0)
		{	if(V >= 50)
			{	I += 1;
				V -= 50;
			}else if(V >= 10)
			{	J += 1;
				V -= 10;
			}else if(V >= 5)
			{	K += 1;
				V -= 5;
			}else if(V >= 1)
			{	L += 1;
				V -= 1;
			}
		}
		printf("Teste %d\n%d %d %d %d\n\n", v++, I, J, K, L);
		I = 0; J = 0; K = 0; L = 0;
	}
return 0;
}