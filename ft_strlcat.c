/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sephilip <sephlip@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:45:41 by sephilip          #+#    #+#             */
/*   Updated: 2023/11/03 14:24:16 by sephilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	size_t	j;

	len = 0;
	while (len < size && dst[len])
		len++;
	j = ft_strlen(src);
	if (len == size)
		return (len + j);
	i = 0;
	while (src[i] && (i < size - len - 1))
	{
		dst[len + i] = src[i];
		i++;
	}
	dst[len + i] = 0;
	return (len + j);
}

/*
int	main()
{
	char	d[30];
	char	s[] = "AAAAAAAAA";

	d[0] = 'B';
	ft_memset(d, 0, 30);
	printf("%d\n", ft_strlcat(d, s, 4));
	printf("%s\n", d);
	printf("%s\n", s);
	return (0);
}*/
