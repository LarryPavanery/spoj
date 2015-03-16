#include <iostream>
#include <cstdio>
#include <string>

using namespace std;


int main()
{
	int N, golpes = 0;
	cin >> N;
	for(int i = 0; i < N; i++)
	{	string s;
		cin >> s;
		for(int j = 0; j < s.length(); j++)
		{ 	if(s[j] == 'M' && s[j+1] == 'S' && j <= (s.length() - 2))
			{	golpes++;
				break;
			} else if(s[j] == 'M' && s[j+2] == 'S' && j <= (s.length() - 3) && s.length() > 2)
			{	golpes++;
				break;
			} else if(s[j] == 'M' && s[j+3] == 'S' && j <= (s.length() - 4) && s.length() > 3)
			{	golpes++;
				break;
			}
		}
	}
	cout << golpes << endl;
	return 0;
}