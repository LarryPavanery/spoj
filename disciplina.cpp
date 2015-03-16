#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

int main()
{	int N;
	map<int, int> mp;
	cin >> N;
	for(int i = 0; i < N; i++)
	{	int y, x, alunos = 0;
		cin >>y>>x;
		for(int j = 0; j < x; j++)
		{	int matricula;
			cin >> matricula;
			matricula = matricula % y;
			if(mp[matricula])
			{	mp[matricula]++;
			}else
			{	mp[matricula] = 1;
			}
		}
		while(!mp.empty())
		{	if(mp.begin()->second > 1)
			{	alunos += mp.begin()->second;
				mp.erase(mp.begin());
			}else
			{	mp.erase(mp.begin());
			}
		}
		cout << "Caso " << i+1 << ": " << alunos << endl;
	}
	return 0;
}