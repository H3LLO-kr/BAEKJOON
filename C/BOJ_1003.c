#include <stdio.h>
#include <math.h>
unsigned long long fibo(int n)
{
	long long a = 0, b = 1;
	long long c = a + b;
	if (n < 2)
	{
		return n;
	}
	else
	{
		for (int i = 2; i < n; i++)
		{
			a = b;
			b = c;
			c = a + b;
		}
		return c;
	}
}
int main(void) {
	int n; int T;
    scanf("%d",&T);
    for(int i = 0; i < T; i++){
	    scanf("%d", &n);
	    if(n == 0) printf("1 0\n");
        else printf("%llu %llu\n", fibo(n - 1), fibo(n));
    }
    return 0;
}