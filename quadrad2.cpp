#include <iostream>
#include <string>
#include <vector>
#include <cmath>


using namespace std;

#define POW(e)(e*e)

int main()
{
	int N;
	scanf("%d", &N);
	if(N <= 10000 && -N <= 10000)	printf("%d", POW(N));

return 0;
}