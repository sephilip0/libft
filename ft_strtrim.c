/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sephilip <sephlip@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 20:45:41 by sephilip          #+#    #+#             */
/*   Updated: 2023/11/03 14:37:44 by sephilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p1;
	char	*trimmed;
	size_t	s;
	size_t	e;

	s = 0;
	e = ft_strlen(s1) - 1;
	p1 = (char *)s1;
	while (p1[s] && ft_strchr(set, p1[s]))
		s++;
	while (p1[e] && ft_strchr(set, p1[e]))
		e--;
	trimmed = ft_substr(s1, s, e - s + 1);
	return (trimmed);
}

/*
int	main()
{
	char	s[] = "123 123";
	char	t[] = " ";

	printf("%s\n", ft_strtrim(s, t));
	return (0);
}*/
