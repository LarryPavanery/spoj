#include <iostream>
#include <map>

using namespace std;

#define PRINT(pt) cout << pt << endl;
#define FOR(f) for(int i = 0; i < f; i++) 

int main()
{

	int N = 0;
	bool primo = true;
	int pl[] = {2, 3, 5, 7, 11, 13, 17, 19, 23}; //primos < 2**31
	string P;
	char dici[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	map<char, int> mp;
	for(int u = 0; u < sizeof(dici) - 1; u++)	mp[dici[u]] = u + 1;

	while(cin >> P)
	{	for(int j = 0; j < P.size(); j++)
		{	N += mp[P[j]];
		}
		if(N == 0)
		{	PRINT("It is not a prime word.");
		}else if(N == 1 || N == 2)
		{	PRINT("It is a prime word.");
		}else
		{	FOR(sizeof(pl)/4)
			{	if(N == pl[i])
				{	primo = true;
					break;
				}else if(N % pl[i] == 0)
				{	PRINT("It is not a prime word."); 
					primo = false; 
					break;
				}
			}
			if(primo)
			{	PRINT("It is a prime word.");
			}	
		}
		N = 0;
		primo = true;
	}

return 0;
}