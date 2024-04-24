#include <ctype.h>
#include "libft.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <bsd/string.h>

 //cc -Wall -o test_program tester.c -L. -lft -lbsd

void test_bzero(void)
{
	char buf[10];
	ft_memset(buf, 1, sizeof(buf));
	ft_bzero(buf, sizeof(buf));

	size_t i = 0;
	while(i< sizeof(buf))
	{
		if(buf[i] != 0)
		{
			printf("test failed");
			return;
		}
		i++;
	}
	printf("Test passed");
}

void test_memmove(void)
{
	char buf[20] = "Hello, World!";

	char *src = buf + 2;
	char *dest =buf + 7;
	
	printf("%s \n", (char *)ft_memmove(dest, src, 5));
	printf("%s", (char *)memmove(dest, src, 5));
}



void test_memcpy(void)
{
	
	char src[] = "source string";
	char dest[] = "destination";
	
	printf("%s \n", (char *)ft_memcpy(dest, src, sizeof(dest)));
	printf("%s \n", (char *)memcpy(dest, src, sizeof(dest)));
}


void test_strlcpy(void)
{
	
	char src[] = "coucou";
	char dest[10]; 
	memset(dest, 'A', 10);
	
	printf("%zu \n", ft_strlcpy(dest, src, 0));
	printf("%zu \n", strlcpy(dest, src, 0));
	printf("%zu \n", ft_strlcpy(dest, src, 1));
	if(dest[0] == 0 && dest[1] == 'A')
		printf("%s", "worked");
	printf("%zu \n", strlcpy(dest, src, 1));
	printf("%zu \n", ft_strlcpy(dest, src, 2));
	printf("%zu \n", strlcpy(dest, src, 2));
	printf("%zu \n", ft_strlcpy(dest, "1", 0));
	printf("%zu \n", strlcpy(dest, "1", 0));
}

void test_strlcat(void)
{
	// char dest[20] = "hello, ";
	// char dest2[20] = "hello, ";
	// char dest3[20] = "hello, ";
	// char dest4[20] = "hello, ";

	// const char *src = "World";
	// size_t result;


	// result = strlcat(dest, src, sizeof(dest));
	// printf("After strlcat: '%s', Length returned: %zu\n", dest, result);
	// result = ft_strlcat(dest2, src, sizeof(dest));
	// printf("After ft_strlcat: '%s', Length returned: %zu\n", dest2, result);

	// result = strlcat(dest3, "very long string test", sizeof(dest));
	// printf("After strlcat with truncation: '%s', Length returned: %zu\n", dest3, result);

	// result = ft_strlcat(dest4, "very long string test", sizeof(dest));
	// printf("After ft_strlcat with truncation: '%s', Length returned: %zu\n", dest4, result);
	char dest[30]; memset(dest, 0, 30);
	char * src = (char *)"AAAAAAAAA";
	dest[0] = 'B';
	//if(ft_strlcat(dest, src, 3) == 3 + strlen(src) && !strcmp(dest, "BBBB"))
	
	printf("actual: %zu Intended:%zu", ft_strlcat(dest, src, 0), strlen(src));
	
	
}

void test_strrchr(void)
{
	printf("%s \n", ft_strrchr("Google", 'd'));
	printf("%s \n", strrchr("Google", 'd'));

	printf("%s \n", ft_strchr("Google", 'd'));
	printf("%s \n", strchr("Google", 'd'));
	

}


void test_strncmp(void)
{
	printf("%i \n", strncmp("dozg", "aaa", 3));
	printf("%i \n", ft_strncmp("dozg", "aaa", 3));
}

void test_memchr(void)
{
	//char buf[20] = "Hello, World!";

	//printf("%s \n", (char *)ft_memchr(buf, 'g', 0));
	//printf("%s \n", (char *)memchr(buf, 'g', 0));

	char s[] = {0, 1, 2 ,3 ,4 ,5};
	printf("%s",(char *)ft_memchr(s,  2+ 256, 3));
	printf("%s",(char *)memchr(s,  2+ 256, 3));

}

void test_memcmp(void)
{
	char buf[20] = "jangle";
	char buf2[20] = "junngle";

	printf("%i \n", ft_memcmp(buf, buf2, 20));
	printf("%i \n", memcmp(buf, buf2, 20));
}

void test_strnstr(void)
{
	char haystack[30] = "aaabcabcd";
	//printf("%s \n", ft_strnstr("billabobog", "", 1));
	//printf("%s \n", strnstr("billabobog", "", 1));
	printf("%s \n", (ft_strnstr(haystack, "cd", 8)));
	printf("%s", (strnstr(haystack, "cd", 8)));
}

void test_atoi(void)
{
	
	printf("%i \n", ft_atoi("            1"));
	printf("%i \n", atoi("            1"));
}

void test_strdup(void)
{
	char *str = "String";

	printf("%s \n", ft_strdup(str));
	printf("%s", strdup(str));

}

void test_strjoin(void)
{
	printf("%s", ft_strjoin("tripouille", "42"));
	
}

void test_substr(void)
{
	printf("%s", ft_substr("boring", 3, 3));
}

void test_strtrim(void)
{
	printf("%s", ft_strtrim("abababababacsbabasbasbasbbsababababc", "abc"));
}

void test_split(void)
{
	char **arr = ft_split("abracadabra", 'a');
	size_t i= 0;
	while(arr[i])
		{
			printf("%s \n", arr[i]);
			free(arr[i]);
			i++;
		}
	
	free(arr);
}	

void test_itoa(void)
{
	printf("%s \n", ft_itoa(0));
	printf("%i", 0);
}

void test_putnbr(void)
{
	ft_putnbr_fd(10, STDOUT_FILENO);
}
int main(int argc, char const *argv[])
{
	//printf("%d", ft_isalnum('3')); 

	//printf("%d, %d", isascii('a'), 	ft_isascii('a'));

	//printf("%ld    %ld", strlen("string"), ft_strlen("string"));

	//char array[10];
	//char array2[10];

	//memset(array, 'b', 7);
	//ft_memset(array2, 'c', 7);
	//printf("%s, %s", (char *)memset(array, 'b', 5), (char*)ft_memset(array2, 'c', 5));

	//test_strlcat();
	test_split();
	//test_substr();
	return 0;
}
