/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:19:34 by phartman          #+#    #+#             */
/*   Updated: 2024/04/17 12:26:07 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isdigit(int c)
{
	if((c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

// int main(int argc, char const *argv[])
// {
// 	printf("%d", ft_isdigit('f'));
// 	return 0;
// }