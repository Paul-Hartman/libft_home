/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:49:18 by phartman          #+#    #+#             */
/*   Updated: 2024/04/23 19:41:48 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	size_t total_size;

	void *mem;
	if((int)nmemb < 0 || (int)size < 0|| nmemb > __SIZE_MAX__ / size)
		return (NULL);
	if(nmemb == 0|| size == 0)
		return (malloc(1));

	total_size = nmemb * size;
	mem = malloc(total_size);
	if(mem == NULL)
		return (NULL);
	ft_memset(mem, 0, total_size);
	return (mem);
}