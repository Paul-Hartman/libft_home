/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:44:43 by phartman          #+#    #+#             */
/*   Updated: 2024/04/19 17:19:00 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>



static size_t find_len(int n)
{
	size_t len;
	len = 0;
	
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	len++;
	return len;
}

static int pow_10(int len)
{
	int result;

	result = 1;
	while(len > 1)
	{
		result = result * 10;
		len--;
	}
	return (result);
}

static char *pop_left_digit(int n, int len)
{
	char *str;
	str = malloc(2);
	if(n == 0)
		str[0] = '0';
	else
		str[0] = (n / pow_10(len)) + '0';
	str[1] = '\0';
	
	//printf("%i \n", n % pow_10(len));
	return(str);
}

char *ft_itoa(int n)
{
	size_t len;
	char *str;
	int neg;

	neg = 0;
	if(n == -__INT_MAX__)
	{
		str = "-2147483648";
		return (str);
	}
	if(n < 0)
	{
		n = -n;
		neg = 1;
	}
	len = find_len(n);
	str = malloc((len + neg) * sizeof(char));
	if(!str)
		return (NULL);
	if(neg)
		ft_strlcat(str, "-", sizeof(str));
	while(len > 0)
	{
		ft_strlcat(str, pop_left_digit(n, len), sizeof(str));
		n = n % pow_10(len);
		len--;
	}
	return (str);
}



