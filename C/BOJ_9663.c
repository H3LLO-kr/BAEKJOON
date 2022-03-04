#include <stdio.h>

int	N;
int	count = 0;

int	_abs(int num)
{
	return (num < 0 ? num * -1 : num);
}

int	_check_valid(int *arr, int index)
{
	for (int i = 0; i < index; i++)
	{
		if (arr[i] == arr[index])
			return (0);
		if (_abs(index - i) == _abs(arr[index] - arr[i]))
			return (0);
	}
	return (1);
}

void	_n_queens_r(int *arr, int index)
{
	if (index == N)
	{
		count++;
		return ;
	}
	for (int i = 0; i < N; i++)
	{
		arr[index] = i;
		if (_check_valid(arr, index))
			_n_queens_r(arr, index + 1);
		arr[index] = 0;
	}
	return ;
}

int	main(void)
{
	int	arr[20];

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		arr[0] = i;
		_n_queens_r(arr, 1);
	}
	printf("%d\n", count);
}
