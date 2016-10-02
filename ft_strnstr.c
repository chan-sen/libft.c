/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 20:06:12 by chansen           #+#    #+#             */
/*   Updated: 2016/09/25 20:06:14 by chansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*b;
	const char	*l;
	size_t		n;

	b = big;
	n = len;
	while (*big)
	{
		l = little;
		while (*l && (*l == *b))
		{
			if (n == 0)
				return (NULL);
			l++;
			b++;
			n--;
		}
		if (!(*l))
			return ((char *)big);
		big++;
		b = big;
	}
	return (NULL);
}
