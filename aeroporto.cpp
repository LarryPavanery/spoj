#include <iostream>
#include <cstdio>

using namespace std;
#define FOR(t) for(int i = 1; i <= t; i++)



int main()
{
	int A, V;
	int x, y, maior = 0, f = 1;
	while(scanf("%d %d", &A, &V) == 2 && A != 0 && V != 0)
	{	int voos[A];
		FOR(A){voos[i] = 0; }
		// Cria o grafo
		for(int p = 1; p <= V; p++)
		{	cin >>x>>y;
			voos[x] += 1;
			voos[y] += 1;
		}

		FOR(A){
			if(maior < voos[i]){
				maior = voos[i];
			}
		}
		cout << "Teste " << f << endl;
		FOR(A){
			if(voos[i] == maior){
				cout  << i << " ";
			} 
		}
		
		cout << "\n" << endl;
		f++;	
		maior = 0;	
	}
	return 0;
}