/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:44:43 by phartman          #+#    #+#             */
/*   Updated: 2024/04/23 14:24:24 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static int	is_neg(int n, unsigned int *num)
{
	if (n < 0)
	{
		return (1);
		*num = -n;
	}
	else
	{
		*num = n;
		return (0);
	}
}

char	*ft_itoa(int n)
{
	int				len;
	char			*str;
	int				neg;
	unsigned int	num;

	len = find_len(n);
	str = malloc((len + 1) * sizeof(char));
	len--;
	if (!str)
		return (NULL);
	neg = is_neg(n, &num);
	while (len >= 0)
	{
		str[len--] = (num % 10) + '0';
		num /= 10;
	}
	if (neg)
		str[0] = '-';
	else if (n == 0)
		str[0] = '0';
	return (str);
}
