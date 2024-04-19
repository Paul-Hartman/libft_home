/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:35:18 by phartman          #+#    #+#             */
/*   Updated: 2024/04/19 14:54:52 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>



static size_t wordcount(char const *s, char c)
{
	size_t i;
	size_t count;

	int flag;

	flag = 0;
	count = 0;
	i = 0;
	while(s[i])
	{
		if(s[i] == c)
		{	
			if (flag)
				count++;
			flag = 0;
		}
		else
			flag = 1;
		i++;
	}
	if(flag == 1)
		count++;
	return(count);
}

static void free_all(char **arr, unsigned int count)
{
	if(arr)
	{
		while (count > 0)
		{
			count--;
			if (arr[count])
			{
				free(arr[count]);
				arr[count] = NULL;
			}
		}
		free(arr);
		arr = NULL;
	}
}

static void word_allocate(char const *s, char c, char **arr)
{
	size_t len;
	unsigned int start;
	unsigned int i;
	unsigned int j;
	int flag;

	flag = 0;
	j = 0;
	len = 0;
	i = 0;
	while(s[i])
	{
		if(s[i] != c)
		{
			if(!flag)
				start = i;
			len++;
			flag = 1;
		}
		if(s[i] == c)
		{
			if(flag)
				arr[j] = ft_substr(s, start, len);
			if(!arr[j])
				free_all(arr, j);
			j++;
			len = 0;
			flag = 0;
		}
		i++;
	}
	if (flag)
		arr[j++] = ft_substr(s, start, len);
}

char **ft_split(char const *s, char c)
{
	size_t wc;
	char **arr;

	wc = wordcount(s,c);
	arr = calloc(wc + 1, sizeof(char *));
	if(!arr)
		return (NULL);
	word_allocate(s, c, arr);
	return(arr);
}

