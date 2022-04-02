/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BOJ_14888.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhapa <chanhapa@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 16:23:15 by chanhapa          #+#    #+#             */
/*   Updated: 2022/04/02 16:25:17 by chanhapa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max = -1000000000;
int	min = 1000000000;

int	_calc(int *arr, char *exp)
{
	int	ret = arr[0];
	arr++;
	while (*exp && *arr)
	{
		switch (*exp)
		{
			case 1:
				ret += *arr;
				break;
			case 2:
				ret -= *arr;
				break;
			case 3:
				ret *= *arr;
				break;
			case 4:
				ret /= *arr;
				break;
			default:
				return 0;
		}
		exp++;
		arr++;
	}
	return (ret);
}

int	_recul(int *arr, int *expnum, char *exp, int index)
{
	if (!expnum[0] && !expnum[1] && !expnum[2] && !expnum[3])
	{
		int ret = _calc(arr, exp);
		if (ret > max)
			max = ret;
		if (ret < min)
			min = ret;
		return 0;
	}
	for (int i = 0; i < 4; i++)
	{
		if (expnum[i])
		{
			expnum[i]--;
			exp[index] = i + 1;
			_recul(arr, expnum, exp, index + 1);
			exp[index] = 0;
			expnum[i]++;
		}
	}
	return 0;
}

int	main(void)
{
	int		N;
	int		arr[11] = {};
	int		expnum[4] = {};
	char	exp[11] = {};

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", arr + i);
	for (int i = 0; i < 4; i++)
		scanf("%d", expnum + i);
	_recul(arr, expnum, exp, 0);
	printf("%d\n%d\n", max, min);
	return 0;
}
