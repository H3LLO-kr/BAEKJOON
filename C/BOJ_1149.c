#include <stdio.h>

int	main(void)
{
	int	N;
	int	arr_input[3];
	int	arr[3] = {};
	int min;

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 3; j++)
			scanf("%d", arr_input + j);
		for (int j = 0; j < 3; j++)
		{
			min = 1000;
			for (int k = 0; k < 3; k++)
				if (k != j && arr[k] < min)
					min = arr[k];
			arr_input[j] += min;
		}
		for (int j = 0; j < 3; j++)
			arr[j] = arr_input[j];
	}
	min = 10000000;
	for (int i = 0; i < 3; i++)
		if (arr[i] < min)
			min = arr[i];
	printf("%d", min);
}
