#include <iostream>
#include <cstdio>

using namespace std;

int getMinutos(int hora, int minuto)
{	int minutos;
	if (hora == 0)
	{	minutos = 24*60 + minuto;
	} else
	{	minutos = hora*60 + minuto;
	}
	return minutos;
}

int main() 
{	int h1, m1, h2, m2;
	int horaM = 1440;
	scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
	while(h1 || m1 || h2 || m2)
	{	if(h1 == h2 && m1 == m2)
		{	cout << 0 << endl;
		}else if (h1 == h2 && m1 > m2)
		{	cout << horaM-(m1-m2) << endl;
		}else if (h1 == h2 && m1 < m2)
		{	cout << getMinutos(h2, m2) - getMinutos(h1, m1) << endl;
		}else
		{	if (h1 == 0 && h1 < h2)
			{	cout << ((horaM+(h2*60)+m2))-(horaM+m1) << endl;
			}else if (h2 == 0)
			{	cout << getMinutos(h2, m2) - getMinutos(h1, m1) << endl;
			}else if (h1 > h2)
			{	cout << horaM-(((h1*60)+m1)-((h2*60)+m2)) << endl;
			}else
			{	cout << getMinutos(h2, m2) - getMinutos(h1, m1) << endl;
			}
		}
		scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
	}
	return 0;
}