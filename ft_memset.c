/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sephilip <sephlip@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 21:26:03 by sephilip          #+#    #+#             */
/*   Updated: 2023/11/03 14:11:50 by sephilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memset(void *s, int c, size_t len)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)s;
	while (i < len)
	{
		p[i] = c;
		i++;
	}
	return (s);
}

/*
int	main()
{
	char	str[] = "Hello";

	printf("%s\n", (char *)ft_memset(str, 'l', 5));
	return (0);
}*/
