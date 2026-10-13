/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasnimo <tasnimo@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 20:17:47 by tasnimo           #+#    #+#             */
/*   Updated: 2026/05/12 11:18:06 by tamakhlo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	copylen;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	copylen = slen - start;
	if (len <= copylen)
	{
		copylen = len;
	}
	subs = malloc(copylen + 1);
	if (!subs)
	{
		return (NULL);
	}
	ft_memcpy(subs, s + start, copylen);
	subs[copylen] = '\0';
	return (subs);
}
