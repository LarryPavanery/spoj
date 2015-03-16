#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <map>
using namespace std;

#define PRINT(s) cout << s << endl;

int main()
{
	int N, comp = 0;
	long int canidato, can;
	map<int, int> mp;	
	
	scanf("%d", &N);
	for(int j = 0; j < N; j++)
	{	scanf("%ld", &canidato);
		if(mp[canidato])
			mp[canidato]++;
		else	
			mp[canidato] = 1;
	}
	while(!mp.empty())
	{
		if(mp.begin()->second > comp)
		{
			can = mp.begin()->first;
			comp = mp.begin()->second;
			mp.erase(mp.begin());
		}else
		{
			mp.erase(mp.begin());
		}
	}
	printf("%ld", can);
	

	
return 0;
}