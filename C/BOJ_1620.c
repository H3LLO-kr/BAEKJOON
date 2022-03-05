#include <stdio.h>

int	ft_num(char *str);

int	_is_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	num;
	int	sign;

	sign = 1;
	while (*str)
	{
		if (_is_space(*str))
			str++;
		else
			break ;
	}
	while (*str)
	{
		if (*str == '-')
			sign *= -1;
		else if (*str != '+')
			break ;
		str++;
	}
	num = ft_num(str);
	return (num * sign);
}

int	ft_num(char *str)
{
	int	num;

	num = 0;
	while (*str)
	{
		if ((*str) >= '0' && (*str) <= '9')
		{
			num *= 10;
			num += *str - '0';
			str++;
		}
		else
			break ;
	}
	return (num);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while(s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			break;
		i++;
	}
	if (!s1[i] && !s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
}

int main(void)
{
	int		N;
	int		M;
	char	str[30];
	char	dict[105000][30];
	int		atoi_res;

	scanf("%d %d", &N, &M);
	for (int i = 1; i <= N; i++)
		scanf("%s", dict[i]);
	for (int i = 0; i < M; i++)
	{
		scanf("%s", str);
		atoi_res = ft_atoi(str);
		if (atoi_res == 0)
		{
			int j;
			for (j = 0; ft_strcmp(str, dict[j]) != 0; j++)
				;
			printf("%d\n", j);
		}
		else
		{
			printf("%s\n", dict[atoi_res]);
		}
	}
}
