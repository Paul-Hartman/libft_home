/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:32:52 by phartman          #+#    #+#             */
/*   Updated: 2024/04/18 12:55:37 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if(n == 0)
		return (0);
	while(i < n && s1[i] == s2[i])
	{
		if(!s2[i])
			return (0);
		i++;
	}
	return ((s1[i] > s2[i]) - (s1[i] < s2[i]));

}

