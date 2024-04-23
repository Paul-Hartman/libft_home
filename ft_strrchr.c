/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phartman <phartman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:49:14 by phartman          #+#    #+#             */
/*   Updated: 2024/04/23 17:22:41 by phartman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_strrchr(const char *s, int c)
{
	size_t len;
	unsigned char uc;

	uc = c;
	len = strlen(s);
	if(uc == 0)
		return ((char *)&s[len]);
	while(len--)
	{
		if (s[len] == uc)
			return ((char *)&s[len]);
	}
	
	return (NULL);
}

// int main(int argc, char const *argv[])
// {	
	
// 	char s[] = "tripouille";
// 	char s2[] = "ltripouiel";
// 	char s3[] = "";
// 	printf("1 %s \n", ft_strrchr(s, 0));
// 	printf("2 %s \n", strrchr(s, 0));
// 	printf("3 %s \n", ft_strrchr(s, 't' + 256));
// 	printf("4 %s \n", strrchr(s, 't' + 256));
// 	printf("5 %s \n", ft_strrchr(s3, 0));
// 	printf("6 %s \n", strrchr(s3, 0));
// 	return 0;
// }
