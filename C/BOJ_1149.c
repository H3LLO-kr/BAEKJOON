#include <stdio.h>
#define min(n1, n2) (n1 < n2 ? n1 : n2)

int	main(void)
{
	int	N;
	int	arr_input[3];
	int	arr[3] = { 0, };
	int	min;

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 3; j++)
			scanf("%d", arr_input + j);
		arr_input[0] += min(arr[1], arr[2]);
		arr_input[1] += min(arr[0], arr[2]);
		arr_input[2] += min(arr[0], arr[1]);
		for (int j = 0; j < 3; j++)
			arr[j] = arr_input[j];
	}
	min = 10000000;
	for (int i = 0; i < 3; i++)
		if (arr[i] < min)
			min = arr[i];
	printf("%d", min);
}
