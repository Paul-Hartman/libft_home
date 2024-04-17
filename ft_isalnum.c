/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:30:16 by phartman          #+#    #+#             */
/*   Updated: 2024/04/17 13:04:41 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int ft_isalnum(int c)
{
	if(ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else 
		return (0);
}

// int main(int argc, char const *argv[])
// {
// 	printf("%d %d %d", isalnum(1), isalnum('b'), isalnum
// ('Z'));
// 	return 0;
// }
