#include <stdio.h>

int	main(void)
{
	int		arr[26] = { 0, };
	int		x, y;
	char	board[20][20] = {};
	scanf("%d %d", &x, &y);
	for (int i = 0; i < x; i++)
		for (int j = 0; j < y; j++)
			scanf("%c", &board[i][j]);
	printf("%d %d\n", x, y);
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
			printf("%c ", board[i][j]);
		printf("\n");
	}
}
