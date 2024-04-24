/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:50:05 by phartman          #+#    #+#             */
/*   Updated: 2024/04/24 14:53:02 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*memdest;
	const unsigned char	*memsrc;
	size_t				i;

	i = 0;
	memdest = dest;
	memsrc = src;
	while (i < n)
	{
		memdest[i] = memsrc[i];
		i++;
	}
	return (dest);
}
