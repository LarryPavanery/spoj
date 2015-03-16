#include <iostream>



using namespace std;


int main()
{
	int N, nI, v = 1;
	while(scanf("%d", &N) == 1 && N != 0)
	{
		for(int i = 1; i <= N; i++)	
		{
			scanf("%d", &nI);
			if(i == nI)
			{
				printf("Teste %d\n%d\n\n", v++, nI);
				//i = N + 1;
			}
		}
	}
	

return 0;
}