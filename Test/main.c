/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:49:15 by mitran            #+#    #+#             */
/*   Updated: 2022/10/25 14:52:41 by mitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"
#include <stdio.h>
#include "string.h" //THIS IS FOR ORIGINAL strdup.c FOR COMPARISON//

 void    myfunc(unsigned int i, char *str_at_ft_striteri)
{

	ft_putchar_fd(*str_at_ft_striteri, 1);
	printf("%d\n", i);
}

char	my_strmapi(unsigned int strmapi_i, char strmapi_str)
{
 	printf("My strmapi works with index: %d and has value of: %c\n", strmapi_i, strmapi_str);
 	return (strmapi_str - 32);
}

void	print_list(t_list *list)
{
	while(list)
	{
		ft_putstr_fd(list -> content, 1);
		list = list -> next;
	}
}

int	main(void)
{

	//TESTING FT_BZERO.C//
	printf("----Testing ft_bzero.c----\n\n");
	unsigned char	bzerostr[100] = "Hello there";

	printf("Before ft_memset: %s\n", bzerostr);
	ft_bzero(bzerostr, 0);
	printf("After ft_memset: %s\n\n", bzerostr);



	//TESTING FT_ISALNUM.C//
	printf("----Testing ft_isalnum.c----\n\n");
	if (ft_isalnum(-5) == 0)
	{
		printf("It is not an alphanumeric character set\n\n");
	}
	else
	{
		printf("It is an alphanumeric character set\n\n");
	}


	//TESTING FT_ISALPHA.C//
	printf("----Testing ft_isalpha.c----\n\n");
	if (ft_isalpha('a') == 0)
	{
		printf("It is not an alphabet\n\n");
	}
	else
	{
		printf("It is an alphabet\n\n");
	}

	//TESTING FT_ISASCII.C//
	printf("----Testing ft_isascii.c----\n\n");
	if (ft_isascii(128) == 0)
	{
		printf("It is not on ascii table\n\n");
	}
	else
	{
		printf("It is on ascii table\n\n");
	}

	//TESTING FT_ISDIGIT.C//
	printf("----Testing ft_isdigit.c----\n\n");
	if (ft_isdigit(3) == 0)
	{
		printf("It is not a digit\n\n");
	}
	else
	{
		printf("It is a digit\n\n");
	}

	//TESTING FT_ITOA.C//
	printf("----Testing ft_itoa.c----\n\n");
	printf("%s\n", ft_itoa(-12212));
	printf("\n\n");

	//TESTING FT_MEMCPU.C//
	printf("----Testing ft_memcpy.c----\n\n");
	char	memcpydes[] = "aaaaaa";
	char	memcpysrs[] = "b2b";

	printf("Before copy: %s\n", memcpydes);
	
	printf("After copy: %s\n\n", ft_memcpy(memcpydes, memcpysrs, ft_strlen(memcpysrs)));

	//TESTING FT_MEMMOVE.C//
	printf("----Testing ft_memmove.c----\n\n");
	char	memmovedes[] = "aaaaaaaa";
	char	memmovesrs[] = "bcb";

	printf("Before move: %s\n", memmovedes);
	printf("After move: %s\n\n", ft_memmove(memmovedes, memmovesrs, ft_strlen(memmovesrs)));


	//TESTING FT_MEMSET.C//
	printf("----Testing ft_memset.c----\n\n");
	unsigned char	memstr[100] = "Hello there";

	printf("Before ft_memset: %s\n", memstr);
	ft_memset(memstr, 'a', 3);
	printf("After ft_memset: %s\n\n", memstr);


	//TESTING FT_PUTCHAR_FD.C//
	printf("----Testing ft_putchar_fd.c----\n\n");
	char	c1;
	c1 = '$';
	
	ft_putchar_fd(c1, 2);
	printf("\n\n");
	
	//TESTING FT_PUTENDL_FD.C//
	printf("----Testing ft_putendl_fd.c----\n\n");
	char	str2[] = "Test string with sp ace after this";
	ft_putendl_fd(str2, 1);

	//TESTING FT_PUTNBR_FD.C//
	printf("----Testing ft_putnbr_fd.c----\n\n");
	int	i1 = 3;
	int fd1 = 2;
	
	printf("This is the number input: \n");
	ft_putnbr_fd(i1, fd1);
	printf("\n\n");

	//TESTING FT_PUTSTR_FD.C//
	printf("----Testing ft_putstr_fd.c----\n\n");
	char	str1[] = "Test string with putstr_fd";
	
	printf("This is the string input:\n");
	ft_putstr_fd(str1, 1);
	printf("\n\n");

	//TESTING FT_STRCHR.C//
	printf("----Testing ft_strchr.c----\n\n");
	const	char	strchr[] = "Hello this is the test string!";
	const	char	chr = '0';

	printf("%s", ft_strchr(strchr, chr));
	printf("\n\n");

	//TESTING FT_SPLIT.C//
	printf("----Testing ft_strplit.c----\n\n");
    char    split_str[] = "Hello There!";
    char    **split_result;

    split_result = ft_split(split_str, 'e');
    printf("Result is %s\n", *split_result);
    printf("Result is %s\n", split_result[1]);
    printf("Result is %s\n", split_result[2]);
	printf("Result is %s\n", split_result[3]);
    
    printf("\n\n");


	//TESTING FT_STRDUP.C//
	printf("----Testing ft_strdup.c----\n\n");
	char	str1st [] = "Hello there.";
	printf("Original function returns: %s\n", strdup(str1st));
	printf("My function returns      : %s\n", ft_strdup(str1st));
	printf("\n");

	//TESTING FT_STRITERI.C//
	printf("\nTesting ft_striteri\n\n");
     char  *stuff;
     stuff = "work\n";
     ft_striteri(stuff, myfunc);

     printf("%s", stuff);

	//TESTING FT_STRJOIN.C//
	printf("----Testing ft_strjoin.c----\n\n");
	char strjoin1[] = "Hello! There will be a space after this dot.";
	char strjoin2[] = " Hi!";
	printf("$%s$", ft_strjoin(strjoin1, strjoin2));
	printf("\n\n");

	//TESTING FT_STRLCAT.C//
	printf("----Testing ft_strlcat.c----\n\n");
	char	strlcatdst[] = "123456789";
	char	strlcatsrc[] = "Hi";
	char	strlcatdst1[] = "123456789";
	char	strlcatsrc1[] = "Hi";

	printf("%zu\n", ft_strlcat(strlcatdst, strlcatsrc, 3));
	printf("%lu\n\n", strlcat(strlcatdst1, strlcatsrc1, 3));

	//TESTING FT_STRLCPY.C//
	printf("----Testing ft_strlcpy.c----\n\n");
	char	strlcpydst[] = "Hello";
	char	strlcpysrc[] = "Hi1234";

	printf("%zu\n", ft_strlcpy(strlcpydst, strlcpysrc, 4));
	printf("%zu\n\n", strlcpy(strlcpydst, strlcpysrc, 4));


	//TESTING FT_STRLEN.C//
	printf("----Testing ft_strlen.c----\n\n");
	char	str[] = "Test string";
	int	result = ft_strlen(str);
	printf("Length of the string is %d.\n\n", result);

	//TESTING FT_STRMAPI.C//
	printf("----Testing ft_strmapi.c----\n\n");
	char str_mapi_test[] = "Hi";

 	printf("The result is %s\n", str_mapi_test);
 	char *str_mapi_res;
	str_mapi_res = ft_strmapi(str_mapi_test, my_strmapi);

	//TESTING FT_STRTRIM.C//
	printf("----Testing ft_strtrim.c----\n\n");
	char	*strtrim;
	char	*setnum;

	strtrim = "aaaaabhellobaa";
	setnum = "ab ";

	printf("%s", ft_strtrim(strtrim, setnum));
	printf("\n\n");

	//TESTING FT_SUBSTR.C//
	printf("----Testing ft_substr.c----\n\n");
	char	substrtest[] = "Hello, how are you?";
	printf("$%s$", ft_substr(substrtest, 1, 7));
	printf("\n\n");


	//TESTING FT_TOUPPER.C//
	printf("----Testing ft_toupper.c----\n\n");
	printf("%c\n\n", ft_toupper('+'));

	//TESTING FT_TOLOWER.C//
	printf("----Testing ft_tolower.c----\n\n");
	printf("%c\n\n", ft_tolower('E'));


	printf("----END OF MANDATORY TESTS----\n\n");


	//TESTING FT_LSTNEW.C//
	printf("----Testing ft_lstnew.c----\n\n");
	t_list	*list_test;

	list_test = ft_lstnew("This is the list's content\n\n");
 	print_list(list_test);
	
	
	}