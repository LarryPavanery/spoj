#include <iostream>
#include <string>



#define DIFERENCA(a, b)(a - b)
#define PRINT(x) cout << x << endl
using namespace std;


int main()
{
	int M, N;
	while(scanf("%d\n%d", &N, &M) == 2 && (1 <=N<= 40) && (1 <=M<= 40))
	{
		PRINT(DIFERENCA(N, M));
	}
return 0;
}