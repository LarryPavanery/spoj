#include <iostream>
#include <string>

#define FOR(j) for (int i = 0; i < j; i++)
#define PAR(a,b) ((a + b)%2 == 0)
#define PRINT(p) cout << p << endl
#define PRINTT(t, q) cout << t << q++ << endl
using namespace std;


int main()
{
	int N, A, B, v = 1;
	char j1[11], j2[11];
	while(scanf("%d", &N) == 1 && N != 0 && (0 < N <= 1000) && (0 <= A <= 5) && (0 <= B <= 5) && (1 <= sizeof(j1) <= 10) && (1 <= sizeof(j2) <= 10))
	{
		scanf("%s\n%s", j1, j2);
		PRINTT("Teste ", v);
		FOR(N)
		{	scanf("%d %d", &A, &B);
			PAR(A,B) ? PRINT(j1):PRINT(j2);
		}
		PRINT("");
	}
return 0;
}