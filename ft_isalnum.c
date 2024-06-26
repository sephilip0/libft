/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sephilip <sephlip@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 21:22:16 by sephilip          #+#    #+#             */
/*   Updated: 2023/11/03 14:08:13 by sephilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/*
int	main ()
{
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", isalnum('a'));
	printf("%d\n", ft_isalnum('1'));
	printf("%d\n", isalnum('1'));
	printf("%d\n", ft_isalnum('.'));
	printf("%d\n", isalnum('.'));
	return (0);
}*/
