/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakholmi <sakholmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 19:27:41 by sakholmi          #+#    #+#             */
/*   Updated: 2019/10/03 16:07:35 by sakholmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *str, const char *find)
{
	unsigned int pos;
	unsigned int i;

	if (!*find)
		return ((char*)str);
	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] == find[0])
		{
			i = 1;
			while (find[i] != '\0' && str[pos + i] == find[i])
				++i;
			if (find[i] == '\0')
				return ((char*)&str[pos]);
		}
		++pos;
	}
	return (0);
}
