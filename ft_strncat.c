/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 17:53:50 by chansen           #+#    #+#             */
/*   Updated: 2016/09/28 17:53:51 by chansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *rc;

	rc = s1;
	while (*s1)
		++s1;
	while (n && (*s1++ = *s2++))
		--n;
	if (n == 0)
		*s1 = '\0';
	return (rc);
}
