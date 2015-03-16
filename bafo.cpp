#include <iostream>
#include <string>

#define MAIOR(i, j)(i > j? (i):(j))
#define ZERO(m,n) m = 0; n = 0
#define PRINT(n) cout << "Teste " << v++ << "\n" << n << "\n\n" 
#define FOR(x) for(int i = 0; i < x; i++)

using namespace std;


int main()
{
	int R, A, B, v = 1, p, q;
	string n;
	while(scanf("%d", &R) == 1 && R > 0 && R <= 1000)
	{	
			FOR(R)
			{	scanf("%d %d", &A, &B);
				if((0 <= A <= 100) && (0 <= B <= 100) && A != B)
				{	p += A;
					q += B;
				}
			}
			MAIOR(p, q) == p ? PRINT("Aldo") : PRINT("Beto");
			ZERO(p,q);	
	}
return 0;
}