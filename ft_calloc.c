/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:49:18 by phartman          #+#    #+#             */
/*   Updated: 2024/04/18 15:42:45 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	size_t total_size;

	void *mem;
	if(nmemb == 0|| size == 0 || nmemb > __SIZE_MAX__ / size)
		return (NULL);

	total_size = nmemb * size;
	mem = malloc(total_size);
	if(mem == NULL)
		return (NULL);
	ft_memset(mem, 0, total_size);
	return (mem);
}