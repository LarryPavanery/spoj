#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int N;
	while(scanf("%d", &N) == 1)
	{	for(int i = 0; i < N; i++)
		{	int perguntas;
			cin >> perguntas;
			int caderno[perguntas];
			for(int j = 0; j < perguntas; j++)
			{	int resposta;
				cin >> resposta;
				caderno[j] = resposta;
			}
			int maior = 0;
			int saida = 0;
			for(int k = 0; k < perguntas; k++)
			{	int resposta;
				cin >> resposta;
				caderno[k] = (caderno[k] - resposta)*(caderno[k] - resposta);
				if(caderno[k] > maior)
				{
					maior = caderno[k];
				}
				saida += caderno[k];
			}
			cout << "Caso " << i + 1 << ": " << (saida - maior) << endl;
		}
	}
	return 0;
}