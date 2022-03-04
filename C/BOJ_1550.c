#include <stdio.h>

int	main(void)
{
	char	str[10];
	int		num;
	int		i;

	scanf("%s", str);
	num = 0;
	i = 0;
	while (str[i])
	{
		num *= 16;
		if (str[i] >= '0' && str[i] <= '9')
			num += str[i] - '0';
		else
			num += str[i] - 'A' + 10;
		i++;
	}
	printf("%d\n", num);
}
