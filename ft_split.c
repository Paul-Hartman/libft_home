/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:35:18 by phartman          #+#    #+#             */
/*   Updated: 2024/04/18 18:01:31 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char **ft_split(char const *s, char c)
{
	size_t i;
	size_t count;

	int flag;

	flag = 1;
	count = 0;
	i = 1;
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
	printf("%zu", count);
	return (NULL);

}

int main(int argc, char const *argv[])
{
	ft_split(" bb    bb   bb     bb   bb   ", ' ');
	return 0;
}
