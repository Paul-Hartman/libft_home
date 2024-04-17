/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:49:14 by phartman          #+#    #+#             */
/*   Updated: 2024/04/17 20:11:08 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


char *ft_strrchr(const char *s, int c)
{
	size_t len;

	len = strlen(s);
	while(len--)
	{
		if (s[len] == c)
			return ((char *)&s[len]);
	}
	if(c == 0)
		return ((char *)&s[len]);
	return (NULL);
}
