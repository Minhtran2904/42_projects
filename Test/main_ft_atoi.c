/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corellan <corellan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:28:40 by corellan          #+#    #+#             */
/*   Updated: 2022/11/07 13:39:50 by corellan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("%d\n", atoi("45a"));
	printf("%d\n\n", ft_atoi("45a"));
	printf("%d\n", atoi("a45"));
	printf("%d\n\n", ft_atoi("a45"));
	printf("%d\n", atoi("-45a"));
	printf("%d\n\n", ft_atoi("-45a"));
	printf("%d\n", atoi("a-45"));
	printf("%d\n\n", ft_atoi("a-45"));
	printf("%d\n", atoi("-a45"));
	printf("%d\n\n", atoi("-a45"));
	printf("%d\n", atoi("4/5"));
	printf("%d\n\n", ft_atoi("4/5"));
	printf("%d\n", atoi("-4/5"));
	printf("%d\n\n", ft_atoi("-4/5"));
	printf("%d\n", atoi("\v45"));
	printf("%d\n\n", ft_atoi("\v45"));
	printf("%d\n", atoi("45\v"));
	printf("%d\n\n", ft_atoi("45\v"));
	printf("%d\n", atoi("\v 45"));
	printf("%d\n\n", ft_atoi("\v 45"));
	printf("%d\n", atoi("45 \v"));
	printf("%d\n\n", ft_atoi("45 \v"));
	printf("%d\n", atoi("4-5"));
	printf("%d\n\n", ft_atoi("4-5"));
	printf("%d\n", atoi("4+5"));
	printf("%d\n\n", ft_atoi("4+5"));
	printf("%d\n", atoi("45+"));
	printf("%d\n\n", ft_atoi("45+"));
	printf("%d\n", atoi("4 5"));
	printf("%d\n\n", ft_atoi("4 5"));
	printf("%d\n", atoi("++45"));
	printf("%d\n\n", ft_atoi("++45"));
	printf("%d\n", atoi("--45"));
	printf("%d\n\n", ft_atoi("--45"));
	printf("%d\n", atoi("- 45"));
	printf("%d\n\n", ft_atoi("- 45"));
	printf("%d\n", atoi("2147483647"));
	printf("%d\n\n", ft_atoi("2147483647"));
	printf("%d\n", atoi("9999999999999999999"));
	printf("%d\n\n", ft_atoi("9999999999999999999"));
	printf("%d\n", atoi("-9999999999999999999"));
	printf("%d\n\n", ft_atoi("-9999999999999999999"));
	printf("%d\n", atoi("9223372036854775806"));
	printf("%d\n\n", ft_atoi("9223372036854775806"));
	printf("%d\n", atoi("-9223372036854775807"));
	printf("%d\n\n", ft_atoi("-9223372036854775807"));
	printf("%d\n", atoi("0-0000000002147483648"));
	printf("%d\n\n", ft_atoi("0-0000000002147483648"));
	printf("%d\n", atoi("-00000000002147483648"));
	printf("%d\n\n", ft_atoi("-00000000002147483648"));
	return (0);
}