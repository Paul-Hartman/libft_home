/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:05:36 by phartman          #+#    #+#             */
/*   Updated: 2024/04/17 12:26:14 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isalpha(int c)
{
	if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else 
		return (0);
}

// int main(int argc, char const *argv[])
// {
// 	printf("%d", ft_isalpha('Z'));
// 	return 0;
// }
