/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sephilip <sephlip@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 21:23:22 by sephilip          #+#    #+#             */
/*   Updated: 2023/11/03 14:10:07 by sephilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*
int	main()
{
	printf("%d\n", ft_isprint(32));
	printf("%d\n", isprint(32));
	printf("%d\n", ft_isprint(127));
	printf("%d\n", isprint(127));
	return (0);
}*/
