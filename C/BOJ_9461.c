#include <stdio.h>

int	main(void)
{
	int					N;
	int					num;
	unsigned long long	arr[101] = {0, 1, 1, 1, 2, 2, };

	scanf("%d", &N);
	for (int i = 6; i < 101; i++)
		arr[i] = arr[i - 5] + arr[i - 1];
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num);
		printf("%llu\n", arr[num]);
	}
}
