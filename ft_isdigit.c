/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sephilip <sephlip@student.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 21:18:10 by sephilip          #+#    #+#             */
/*   Updated: 2023/11/03 14:07:38 by sephilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

/*
int	main()
{
	printf("%d\n", ft_isdigit('4'));
	printf("%d\n", isdigit('4'));
	printf("%d\n", ft_isdigit('o'));
	printf("%d\n", isdigit('o'));
	return (0);
}*/
