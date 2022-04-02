#include <stdio.h>

int	N;
int	min = 2147483647;
int	start[20];
int	link[20];

void	_recul(int arr[][20],int start_index, int link_index, int i)
{
	if (i == N)
	{
		int start_a = 0;
		int	link_a = 0;
		for (int i = 0; i < N / 2; i++)
		{
			for (int j = i + 1; j < N / 2; j++)
			{
				start_a += arr[start[i]][start[j]];
				start_a += arr[start[j]][start[i]];
				link_a += arr[link[i]][link[j]];
				link_a += arr[link[j]][link[i]];
			}
		}
		int diff = start_a - link_a;
		if (diff < 0)
			diff *= -1;
		if (diff < min)
			min = diff;
		return ;
	}
	if (start_index < N / 2)
	{
		start[start_index] = i;
		_recul(arr, start_index + 1, link_index, i + 1);
		start[start_index] = 0;
	}
	if (link_index < N / 2)
	{
		link[link_index] = i;
		_recul(arr, start_index, link_index + 1, i + 1);
		link[link_index] = 0;
	}
}

int	main(void)
{
	int	arr[20][20];

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			scanf("%d", &arr[i][j]);
	_recul(arr, 0, 0, 0);
	printf("%d", min);
	return 0;
}
