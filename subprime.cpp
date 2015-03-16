#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main()
{	int B, N;
	while(scanf("%d %d", &B, &N) == 2 && B != 0 && N != 0)
	{	vector<int> rm(B+1,0);
		bool liquidar = true;
		for(int i = 1; i <= B; i++)
		{	int m;
			cin >> m;
			rm[i] = m;
		}
		for(int j = 1; j <= N; j++)
		{	int bd, bc, vd;
			cin >> bd >> bc >> vd;
			rm[bc] += vd;
			rm[bd] -= vd;
		}
		for(int k = 1; k <= B; k++)
		{	if(rm[k] < 0)
			{	liquidar = false;
				break;
			}
		}
		if(liquidar)
		{	cout << "S" << endl;
		} else
		{	cout << "N" << endl;
		}
	}
	return 0;
}