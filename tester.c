#include <ctype.h>
#include "libft.h"
#include <stdio.h>

 //cc -Wall -o test_program tester.c -L. -lft

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

	test_memcpy();
	return 0;
}
