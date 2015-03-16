#include <iostream>
#include <vector>
#include <cstdio>

#define FOR(x) for (int i = 0; i < x; i++)
#define PRINT(p) cout << p << endl;

using namespace std;


int main()
{
	int N, M, sum = 0, minimo = 0;
	vector<int> composicao;
	while(scanf("%d", &N) == 1)
	{
		FOR(N)
		{	cin >> M;
			composicao.push_back(M);
			sum += M;
		}
		if(sum%N == 0)
		{	int i = 0;
			while(composicao[i] < sum/N)
			{	minimo += composicao[i] < sum/N ? (sum/N - composicao[i]):0;
				i++;
			}
			PRINT(minimo + 1);
		}else
		{	PRINT(-1);
		}
		composicao.clear();
		sum = 0;
		minimo = 0;	
	}	
return 0;
}