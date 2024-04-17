/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:39:41 by phartman          #+#    #+#             */
/*   Updated: 2024/04/17 20:10:58 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	size_t i;

	i = 0;
	while(s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if(c == '/0')
		return ((char *)&s[i]);

	return (NULL);
}