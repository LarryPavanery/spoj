#include <iostream>
#include <cstdio>

using namespace std;


int main()
{
	int N;
	while(scanf("%d", &N) == 1)
	{
		for(int i = 0; i < N; i++)
		{
			int velocidade1, velocidade2;
			cin >>velocidade1>>velocidade2;
			if(velocidade1 < velocidade2)
			{
				if((velocidade2 - velocidade1) >= (float)(0.2*velocidade1))
				{
					cout << "Caso " << i+1 << ": oponente 2" << endl;
				} else
				{
					cout << "Caso " << i+1 << ": indeterminado" << endl;
				}
			} else if(velocidade1 > velocidade2)
			{
				if((velocidade1 - velocidade2) >= (float)(0.2*velocidade2))
				{
					cout << "Caso " << i+1 << ": oponente 1" << endl;
				} else
				{
					cout << "Caso " << i+1 << ": indeterminado" << endl;
				}
			} else
			{
				cout << "Caso " << i+1 << ": indeterminado" << endl;
			}
		}
	}
	return 0;
}