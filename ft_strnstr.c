/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:37:41 by phartman          #+#    #+#             */
/*   Updated: 2024/04/18 14:06:08 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (!(*little))
		return ((char *)big);
	while (big[j] && j < len)
	{
		while (big[j + i] == little[i])
		{
			i++;
			if (!little[i])
				return ((char *)&big[j]);
		}
		i = 0;
		j++;
	}
	return (NULL);
}

