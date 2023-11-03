/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sephilip <sephlip@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 21:22:35 by sephilip          #+#    #+#             */
/*   Updated: 2023/11/03 14:08:54 by sephilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*
int	main()
{
	printf("%d\n", ft_isascii(126));
	printf("%d\n", isascii(126));
	printf("%d\n", ft_isascii(128));
	printf("%d\n", isascii(128));
	return(0);
}*/
