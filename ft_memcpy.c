/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakholmi <sakholmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 21:29:11 by sakholmi          #+#    #+#             */
/*   Updated: 2019/10/04 12:54:04 by sakholmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*ptr1;
	char		*ptr2;

	if (!dst && !src)
		return (NULL);
	ptr1 = (const char*)src;
	ptr2 = (char*)dst;
	while (n-- > 0)
		*(ptr2 + n) = *(ptr1 + n);
	return (ptr2);
}
